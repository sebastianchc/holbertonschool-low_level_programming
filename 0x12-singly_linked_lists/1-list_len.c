#include "lists.h"

/**
 * list_len - Number of elements in a linked list.
 * @h: List.
 *
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	int n_elem;

	n_elem = 0;
	while (h)
	{
		h = (*h).next;
		n_elem++;
	}
	return (n_elem);
}
