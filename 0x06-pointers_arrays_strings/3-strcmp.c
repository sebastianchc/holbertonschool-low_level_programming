#include "holberton.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: Variable.
 * @s2: Variable.
 *
 * Return: comparation.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (*s1 != '\0')
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (0);
}
