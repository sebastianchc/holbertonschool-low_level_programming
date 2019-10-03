#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Variable.
 * @src: Variable.
 *
 * Return: *dest.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (dest[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
}
