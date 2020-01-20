#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key
 *
 * Return: Value associated with the key, NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *find = NULL;

	if (!ht || !key)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	find = ht->array[index];
	while (find)
	{
		if (!strcmp(find->key, key))
		{
			return (find->value);
		}
		find = find->next;
	}
	return (0);
}
