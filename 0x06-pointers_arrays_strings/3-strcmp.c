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
	while (s1[x] != '\0')
	{
		if (s1[x] > s2[x])
		{
			return (s1[x] - s2[x]);
		}
		if (s1[x] < s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
