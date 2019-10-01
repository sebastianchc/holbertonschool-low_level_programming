#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: Variable.
 *
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int  x, y, z;
	char w;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	x = x - 1;
	y = 0;
	z = x;
	while (y <= z / 2)
	{
		w = s[x];
		s[x] = s[y];
		s[y] = w;
		x--;
		y++;
	}
}
