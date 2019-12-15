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
	dlistint_t *new, *current, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	tmp = *h;
	current = (*tmp).next;
	(*new).n = n;
	if (!idx)
	{
		(*new).next = *h;
		(*new).prev = NULL;
		(*current).prev = new;
		*h = new;
		return (new);
	}
	while (i != idx - 1)
	{
		current = (*current).next;
		tmp = (*tmp).next;
		if (!current)
		{
			return (0);
		}
		i++;
	}
	(*new).prev = (*current).prev;
	(*new).next = current;
	(*current).prev = new;
	(*tmp).next = new;
	return (new);
}
