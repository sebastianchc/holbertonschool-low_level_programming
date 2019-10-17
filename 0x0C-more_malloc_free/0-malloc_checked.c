#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: Variable.
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);
	if (!address)
	{
		exit(98);
	}
	return (address);
}
