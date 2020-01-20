#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
