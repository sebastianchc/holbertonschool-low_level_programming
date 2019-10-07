#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Variable.
 * @src: Variable.
 * @n: Variable.
 *
 * Return: *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
