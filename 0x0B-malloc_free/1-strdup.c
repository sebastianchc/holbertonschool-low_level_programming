#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function.
 * @str: Variable.
 *
 * Return: Array.
 */

char *_strdup(char *str)
{
	char *array;
	int x, y;

	if (str == NULL)
	{
		return (0);
	}
	x = 0;
	while (str[x])
	{
		x++;
	}
	array = malloc((x + 1) *  sizeof(char));
	y = 0;
	while (y < x)
	{
		array[y] = str[y];
		y++;
	}
	return (array);
}
