#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
	{
		return (NULL);
	}
	i = 0;
	while (i <= max)
	{
		array[i] = i;
		i++;
	}
	return (array);
}
