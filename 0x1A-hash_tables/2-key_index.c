#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - Function that get the index of a key
 * @key: Key
 * @size: size of the array of the hash table
 *
 * Return: index where the key should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2;

	djb2 = hash_djb2((unsigned char *)key);
	return (djb2 % size);
}
