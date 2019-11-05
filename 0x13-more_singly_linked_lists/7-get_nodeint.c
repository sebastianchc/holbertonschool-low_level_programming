#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node.
 * @head: Head list.
 * @index: Node.
 *
 * Return: The nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (0);
	}
	while (i != index)
	{
		tmp = (*tmp).next;
		i++;
	}
	(*node).n = (*tmp).n;
	(*node).next = (*tmp).next;
	return (node);
}
