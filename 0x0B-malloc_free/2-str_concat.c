#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings with malloc.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: Array.
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int size1, size2, i;

	if (!s1)
	{
		size1 = 0;
	}
	if (!s2)
	{
		size2 = 0;
	}
	size1 = 0;
	while (s1[size1])
	{
		size1++;
	}
	size2 = 0;
	while (s2[size2])
	{
		size2++;
	}
	array = malloc((size1 + size2 + 1) *  sizeof(char));
	i = 0;
	while (i < (size1 + size2))
	{
		if (i < size1)
		{
			array[i] = *s1;
			s1++;
		}
		else if (i < (size1 + size2))
		{
			array[i] = *s2;
			s2++;
		}
		i++;
	}
	array[i] = '\0';
	return (array);
}
