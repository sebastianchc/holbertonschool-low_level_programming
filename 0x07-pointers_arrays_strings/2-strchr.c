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
	while (s[x] != c && s[x] != '\0')
	{
		s = s + 1;
		x++;
	}
	if (s[x] == '\0' && s[x] != c)
	{
		return (0);
	}
	return (s + x);
}
