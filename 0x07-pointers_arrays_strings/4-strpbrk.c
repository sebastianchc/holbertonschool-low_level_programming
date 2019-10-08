#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Varible.
 * @accept: Variable.
 *
 * Return: Return: Pointer to the first occurence in the set of chars.
 * NULL if any character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (0);
}
