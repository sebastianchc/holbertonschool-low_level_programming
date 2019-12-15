#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to list to be freed
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = (*head).next;
		free(current);
	}
}
