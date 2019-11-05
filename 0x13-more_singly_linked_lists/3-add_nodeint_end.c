#include "lists.h"

/**
 * add_nodeint_end - At new node at the end.
 * @head: Head of the list.
 * @n: List element.
 *
 * Return: new_node address.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (0);
	}
	tmp = *head;
	(*new_node).n = n;
	(*new_node).next = NULL;
	if (!tmp)
	{
		*head = new_node;
	}
	else
	{
		while ((*tmp).next)
		{
			tmp = (*tmp).next;
		}
		(*tmp).next = new_node;
	}
	return (new_node);
}
