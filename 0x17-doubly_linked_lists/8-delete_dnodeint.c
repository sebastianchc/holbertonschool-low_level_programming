#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at index of a dlistint_t list
 * @head: Pointer to pointer to head of dlistint_t list
 * @index: Index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *count = *head, *crrnt = *head, *prev;
	unsigned int test = 0, cmp = 0;

	if (!*head)
	{
		return (-1);
	}
	while ((*count).next)
	{
		count = (*count).next, test++;
	}
	if (index > test)
	{
		return (-1);
	}
	if (index == 0)
	{
		crrnt = (*crrnt).next;
		free(*head);
		*head = crrnt;
		if (*head)
		{
			(**head).prev = NULL;
		}
		return (1);
	}
	while (cmp < index)
	{
		prev = crrnt, crrnt = (*crrnt).next, cmp++;
	}
	(*prev).next = (*crrnt).next, crrnt = (*crrnt).next;
	if (crrnt)
	{
		(*crrnt).prev = prev;
	}
	return (1);
}
