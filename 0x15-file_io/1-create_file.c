#include "main.h"

/**
 * create_file - creates a file.The created file must have those
 * permissions: rw-------.If the file already exists, do not
 * change the permissions. if the file already exists, truncate it.
 * if text_content is NULL create an empty file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
