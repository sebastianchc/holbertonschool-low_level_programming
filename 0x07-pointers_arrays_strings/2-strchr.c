#include "holberton.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: Variable.
 * @c: Variable.
 *
 * Return: *s.
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] != c)
	{
		x++;
	}
	return (s + x);
}
