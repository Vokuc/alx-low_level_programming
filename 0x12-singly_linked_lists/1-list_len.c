#include "lists.h"
/**
 * list_len - returns then number of elements in a linked
 * list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t no_elem;

	no_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		no_elem++;
	}
	return (no_elem);
}
