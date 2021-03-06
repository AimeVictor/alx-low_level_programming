#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *ptr;

	ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
		}
	}

	if (ptr == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = ptr->next;
		ptr->next = newnode;
	}

	return (newnode);
}
