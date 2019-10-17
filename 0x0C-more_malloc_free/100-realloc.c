#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: the size of the memory to print
 * @new_size: Variable.
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	array = malloc(new_size);
	if (!array)
	{
		return (0);
	}
	else
	{
		ptr = array;
	}
	return (ptr);
}
