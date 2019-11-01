#include "lists.h"

/**
 * free_list - Add a new node at the beginning of a list.
 * @head: Node.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	if((*head).next)
	{
		free_list((*head).next);
	}
	free((*head).str);
	free(head);
}
