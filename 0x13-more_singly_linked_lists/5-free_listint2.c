#include "lists.h"

/**
 * free_listint2 - Free integer list.
 * @head: Head of the list.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!*head)
	{
		return;
	}
	while (*head)
	{
		tmp = (**head).next;
		free(*head);
		*head = tmp;
	}
}
