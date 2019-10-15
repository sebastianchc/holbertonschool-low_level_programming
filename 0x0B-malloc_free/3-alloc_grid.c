#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function.
 * @width: Variable.
 * @height: Variable
 *
 * Return: x.
 */

int **alloc_grid(int width, int height)
{
	int *array;
	int x, y;

	x = 0;
	array = (int *)malloc(width * height * sizeof(int));
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			*(array + x * height + y) = 48;
			y++;
		}
		printf("\n");
		x++;
	}
	return (0);
}
