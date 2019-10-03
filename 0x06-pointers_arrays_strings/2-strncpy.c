#include "holberton.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Variable.
 * @src: Variable.
 * @n: Variable.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
