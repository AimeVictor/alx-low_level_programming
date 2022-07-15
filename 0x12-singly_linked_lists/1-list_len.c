#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_list;

	num_list = 0;
	while (h != NULL)
	{
		h = h->next;
		num_list++;
	}
	return (num_list);
}
