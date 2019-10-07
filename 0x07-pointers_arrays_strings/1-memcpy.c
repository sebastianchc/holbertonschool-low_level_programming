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
	unsigned int x, y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
