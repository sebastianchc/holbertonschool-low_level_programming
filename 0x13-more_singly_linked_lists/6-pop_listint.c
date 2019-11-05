#include "lists.h"

/**
 * pop_listint - Delete the head list.
 * @head: Head list.
 *
 * Return: Head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head)
	{
		return (0);
	}
	tmp = *head;
	n = (**head).n;
	*head = (*tmp).next;
	free(tmp);
	return (n);
}
