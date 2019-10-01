#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Variable.
 *
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
