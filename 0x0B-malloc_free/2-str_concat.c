#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: df
 * @s2: vfdf
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int w, x, y, z;
	char *a = "";

	if (s1 == NULL)
	{
		s1 = a;
	}
	if (s2 == NULL)
	{
		s2 = a;
	}
	x = 0;
	while (s1[x])
	{
		x++;
	}
	y = 0;
	while (s2[y])
	{
		y++;
	}
	array = malloc((x + y + 1) *  sizeof(char));
	z = 0;
	while (z < x)
	{
		array[z] = s1[z];
		z++;
	}
	w = 0;
	while (z < (x + y))
	{
		array[z] = s2[w];
		z++;
		w++;
	}
	return (array);
}
