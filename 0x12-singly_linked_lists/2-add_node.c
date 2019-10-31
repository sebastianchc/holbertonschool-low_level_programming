#include "lists.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Variable.
 *
 * Return: Length of s.
 */

int _strlen(const char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - Add a new node at the beginning of a list.
 * @head: Node.
 * @str: String
 *
 * Return: Number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next;

	next = malloc(sizeof(list_t));
	if (!next)
	{
		return (0);
	}
	(*next).str = strdup(str);
	(*next).len = _strlen(str);
	(*next).next = *head;
	*head = next;
	return (next);
}
