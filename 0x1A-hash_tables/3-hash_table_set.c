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
	unsigned long int index, size = 1024;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, size);
	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[index] = new;
	if(!ht->array[index])
	{
		new->next = NULL;
		return (1);
	}
	new->next = ht->array[index];
	return (1);
}
