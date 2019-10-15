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

	x = 0;
	if (str == NULL)
	{
		return (0);
	}
	while (str[x])
	{
		x++;
	}
	array = malloc(x *  sizeof(char));
	if (array == 0)
	{
		return (0);
	}
	y = 0;
	while (y < x)
	{
		array[y] = str[y];
		y++;
	}
	return (array);
}
