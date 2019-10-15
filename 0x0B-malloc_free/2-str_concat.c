#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *array;
	int w, x, y, z;

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
	array = malloc((x + y) *  sizeof(char));
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
