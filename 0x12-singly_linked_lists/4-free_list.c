#include "lists.h"

/**
 * add_node_end - Add a new node at the beginning of a list.
 * @head: Node.
 * @str: String
 *
 * Return: Number of nodes.
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
