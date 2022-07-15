#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the linked list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend, *temp;
	size_t lon;

	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);

	newend->str = strdup(str);

	for (lon = 0; str[lon]; lon++)
		;

	newend->len = lon;
	newend->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newend;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newend;
	}

	return (*head);
}
