#include "lists.h"

/**
 * free_listint - Free integer list.
 * @head: Head of the list.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	if ((*head).next)
	{
		free_listint((*head).next);
	}
	free(head);
}
