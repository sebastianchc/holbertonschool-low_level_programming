#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly has table, NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (!new)
	{
		return (0);
	}
	new->size = size;
	new->array = calloc(size * sizeof(hash_node_t));
	if (!new->array)
	{
		return (0);
	}
	return (new);
}
