#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: list of nodes
 * @n: data in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodebeg = (listint_t *)malloc(sizeof(listint_t));

	if (!nodebeg)
		return (NULL);

	nodebeg->n = n;
	nodebeg->next = NULL;

	nodebeg->next = *head;
	*head = nodebeg;
	return (*head);
}
