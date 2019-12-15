#include "lists.h"

/**
 * dlistint_len - Count number of elements of a linked dlistint_t list
 * @h: pointer to head of listint_t list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		h = (*h).next;
		elements++;
	}
	return (elements);
}
