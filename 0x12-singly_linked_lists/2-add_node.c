#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list_t list
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t length;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (length = 0; str[length]; length++)
		;

	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
