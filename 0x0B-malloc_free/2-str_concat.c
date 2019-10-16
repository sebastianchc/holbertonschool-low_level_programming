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
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1]; size1++)
		{}
	}
	if (!s2)
		size2 = 0;
	else
	{
		for (size2 = 0; s2[size2]; size2++)
		{}
	}
	array = malloc((size1 + size2 + 1) *  sizeof(char));
	if (!array)
		return (0);
	for (i = 0; i < (size1 + size2); i++)
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
	}
	array[i] = '\0';
	return (array);
}
