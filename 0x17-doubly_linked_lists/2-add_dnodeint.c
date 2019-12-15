#include "lists.h"

/**
 * add_dnodeint - Add node at the beginning of a dlistint_t list
 * @head: Pointer to pointer to head of listint_t list
 * @n: integer to be included in new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
	{
		return (0);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}
	(*new).n = n;
	(*new).prev = NULL;
	(*new).next = *head;
	*head = new;
	(**head).prev = new;
	return (new);
}
