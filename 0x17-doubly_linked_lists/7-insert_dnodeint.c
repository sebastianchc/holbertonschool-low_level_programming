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
	dlistint_t *new, *count = *h, *next = *h, *current;
	unsigned int test = 0, cmp = 0;

	while (count)
	{
		count = (*count).next, test++;
	}
	if (idx > test)
	{
		return (0);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	(*new).n = n;
	if (idx == 0)
	{
		(*new).prev = NULL, (*new).next = *h;
		if (*h)
		{
			(**h).prev = new;
		}
		*h = new;
		return (new);
	}
	while (cmp < idx)
	{
		current = next, next = (*next).next, cmp++;
	}
	(*new).next = next, (*new).prev = current, (*current).next = new;
	if (next)
	{
		(*next).prev = new;
	}
	return (new);
}
