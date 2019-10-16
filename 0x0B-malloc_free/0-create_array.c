#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars.
 * @size: Variable.
 * @c: Variable.
 *
 * Return: Array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(size *  sizeof(char));
	if (!array || !size)
	{
		return NULL;
	}
	x = 0;
	while (x < size)
	{
		array[x] = c;
		x++;
	}
	array[x] = '\0';
	return (array);
}
