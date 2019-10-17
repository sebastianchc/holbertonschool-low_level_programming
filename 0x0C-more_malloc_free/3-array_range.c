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
		return (0);
	}
	array = malloc((max + 1) * sizeof(int));
	if (!array)
	{
		return (0);
	}
	i = min;
	while (i <= max)
	{
		array[i] = i;
		i++;
	}
	return (array);
}
