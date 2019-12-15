#include "lists.h"

/**
 * get_dnodeint_at_index - Add node at index of a dlistint_t list
 * @head: Pointer to head of dlistint_t list
 * @index: Index of the node
 *
 * Return: The address of the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		head = (*head).next;
		if (!head)
		{
			return (0);
		}
		i++;
	}
	return (head);
}
