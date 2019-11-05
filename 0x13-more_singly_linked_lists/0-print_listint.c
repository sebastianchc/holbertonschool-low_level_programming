#include "lists.h"

/**
 * print_listint - Print elements of a list.
 * @h: List.
 *
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int n_nodes;

	n_nodes = 0;
	while (h)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		n_nodes++;
	}
	return (n_nodes);
}
