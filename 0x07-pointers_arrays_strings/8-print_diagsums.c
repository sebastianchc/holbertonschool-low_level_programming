#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two diagonals.
 * @a: Variable.
 * @size: Variable.
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int x, y;
	long int s1, s2;

	s1 = 0;
	s2 = 0;
	x = 0;
	while (x < size)
	{
		y = 0;
		for (y < size)
		{
			if (x == y)
			{
				s1 += *(a + i * size + j);
			}
			if (i == (size - 1) - j)
			{
				s2 += *(a + i * size + j);
			}
			y++;
		}
		x++;
	}
	printf("%li, %li\n", s1, s2);
}
