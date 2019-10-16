#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Function
 *@grid: sdds
 *@height: dssd
 *
 *Return: sdds
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
