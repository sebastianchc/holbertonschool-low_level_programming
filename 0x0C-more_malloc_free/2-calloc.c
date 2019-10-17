#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i, size1;

	if (!nmemb || !size)
	{
		return (0);
	}
	size1 = size * nmemb;
	array = malloc(nmemb * size);
	if (!array)
	{
		return (0);
	}
	i = 0;
	while (i < size1)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
