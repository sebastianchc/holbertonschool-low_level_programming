#include "holberton.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Variable.
 * @accept: Variable.
 *
 * Return: x.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	int z;

	y = 0;
	x = 0;
	while (s[y] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[y] == accept[z])
			{
				x++;
			}
			z++;
		}
		y++;
		if (y > x)
		{
			break;
		}
	}
	return (x);
}
