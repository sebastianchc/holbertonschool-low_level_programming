#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98.
 * @array: Array.
 * @size: Size.
 * @cmp: Function pointer.
 *
 * Return: i.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
