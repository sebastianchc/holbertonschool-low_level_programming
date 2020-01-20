#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - Function that prints a hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0, check = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (check)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			check = 123456789;
		}
		i++;
	}
	printf("}\n");
}
