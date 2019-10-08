#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Varible.
 * @accept: Variable.
 *
 * Return: 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	x = 0;
	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}
