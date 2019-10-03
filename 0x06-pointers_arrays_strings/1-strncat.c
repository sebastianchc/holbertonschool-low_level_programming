#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Variable.
 * @src: Variable.
 * @n: Variable.
 *
 * Return: *dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
        return (dest);
}
