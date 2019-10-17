#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: Variable.
 * @s2: Variable.
 * @n: Variable.
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int size1, i;

	if (!s1)
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1]; size1++)
		{}
	}
	array = malloc((size1 + n + 1) *  sizeof(char));
	if (!array)
		return (0);
	for (i = 0; i < (size1 + n); i++)
	{
		if (i < size1)
		{
			array[i] = *s1;
			s1++;
		}
		else if (i < (size1 + n))
		{
			array[i] = *s2;
			s2++;
		}
	}
	array[i] = '\0';
	return (array);
}
