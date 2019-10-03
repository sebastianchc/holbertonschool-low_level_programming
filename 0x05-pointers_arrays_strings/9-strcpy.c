#include "holberton.h"

/**
 * _strcpy - Write a function that copies the string.
 * @src: Variable.
 * @dest: Variable.
 *
 * Return: *dest.
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
