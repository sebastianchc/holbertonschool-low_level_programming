#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Varible.
 * @accept: Variable.
 *
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
	int w, x, y, z;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	while (accept[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z <= x)
	{
		w = 0;
		while (w <= y)
		{
			if (s[z] == accept[w])
			{
				return (s + z);
			}
			else if (s[z] != accept[w] && s[z] == '\0')
			{
				return (0);
			}
			w++;
		}
		z++;
	}
	return (0);
}
