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
	int x, y, z;

	x = 0;
	y = 0;
	z = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		y++;
	}
	while (z <= y)
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	return (dest);
}
