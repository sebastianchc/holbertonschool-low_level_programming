#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: Hash table to update
 * @key: Key
 * @value: Value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	index = key_index((unsigned char *)key, ht->size);
	new = ht->array[index];
	while(new)
	{
		if (!strcmp(new->key, key))
		{
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	new = NULL, new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
