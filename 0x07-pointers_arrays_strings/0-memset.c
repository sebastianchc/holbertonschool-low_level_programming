#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Variable.
 * @b: Variable.
 * @n: Variable.
 *
 * Return: *s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
