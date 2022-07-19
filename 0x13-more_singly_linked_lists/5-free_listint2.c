#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list and
 *sets the head to NULL.
 *@head: a pointer that points to the first node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem, *jan;

	if (head != NULL)
	{
		jan = *head;
		while ((tem = jan) != NULL)
		{
			jan = jan->next;
			free(tem);
		}
		*head = NULL;
	}
