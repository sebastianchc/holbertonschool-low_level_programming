#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: Pointer to pointer to head of dlistint_t list
 * @idx: Index of the new node
 * @n: Integer to be included in new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *count = *h, *current = *h, *prev;
	unsigned int test = 0, cmp = 0;

	while (count)
	{
		count = (*count).next;
		test++;
	}
	if (test > idx)
	{
		return (0);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	(*new).n = n;
	if (!idx)
	{
		(*new).prev = NULL;
		(*new).next = *h;
		if (*h)
		{
			(**h).prev = new;
		}
		*h = new;
		return (new);
	}
	while (cmp < idx)
	{
		prev = current;
		current = (*current).next;
		cmp++;
	}
	prev = (*current).prev;
	(*prev).next = new;
	(*new).prev = prev;
	(*new).next = current;
	if (current)
	{
		(*current).prev = new;
	}
	return (new);
}
