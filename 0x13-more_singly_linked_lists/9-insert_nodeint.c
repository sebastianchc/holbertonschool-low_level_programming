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

	new_node = malloc(sizeof(listint_t));
	if (!new_node || (!head && !*head))
	{
		return (0);
	}
	(*new_node).n = n;
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
