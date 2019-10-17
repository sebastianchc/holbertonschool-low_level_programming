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

	if (!nmemb || !size)
	{
		return (0);
	}
	array = malloc(nmemb * size);
	if (!array)
	{
		return (0);
	}
	return (array);
}
