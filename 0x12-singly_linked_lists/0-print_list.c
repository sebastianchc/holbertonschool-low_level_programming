#include "lists.h"

/**
 * print_list - Print elements of a list.
 * @h: List.
 *
 * Return: Length.
 */

size_t print_list(const list_t *h)
{
	int size;

	size = 0;
	while (h)
	{
		if ((*h).str)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = (*h).next;
		size++;
	}
	return (size);
}
