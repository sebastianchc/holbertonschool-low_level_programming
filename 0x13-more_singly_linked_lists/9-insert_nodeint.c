#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Head list.
 * @idx: Side.
 * @n: Data
 *
 * Return: New node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (!head)
	{
		return (0);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (0);
	}
	(*new_node).n = n;
	if (!idx)
	{
		(*new_node).next = *head;
		*head = new_node;
	}
	i = 0;
	tmp = *head;
	while (tmp)
	{
		if (i == idx - 1)
		{
			(*new_node).next = (*tmp).next;
			(*tmp).next = new_node;
			return (new_node);
		}
		tmp = (*tmp).next;
		i++;
	}
	return (0);
}
