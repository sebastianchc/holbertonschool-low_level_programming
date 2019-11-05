#include "lists.h"

/**
 * print_listint - Count elements.
 * @h: List.
 *
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
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
