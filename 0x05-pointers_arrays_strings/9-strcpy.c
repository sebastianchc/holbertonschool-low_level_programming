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
	int x, y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	while (y <= x)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
