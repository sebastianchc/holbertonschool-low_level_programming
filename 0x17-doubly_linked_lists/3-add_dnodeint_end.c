#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of a dlistint_t list
 * @head: Pointer to pointer to head of listint_t list
 * @n: integer to be included in new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	(*new).n = n;
	(*new).next = NULL;
	if (!*head)
	{
		(*new).prev = NULL;
		*head = new;
	}
	else
	{
		while ((*current).next)
		{
			current = (*current).next;
		}
		(*new).prev = current;
		(*current).next = new;
	}
	return (new);
}
