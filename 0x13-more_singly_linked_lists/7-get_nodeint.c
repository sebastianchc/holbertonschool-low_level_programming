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
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (i < index)
	{
		if (!tmp)
		{
			return (0);
		}
		tmp = (*tmp).next;
		i++;
	}
	return (tmp);
}
