#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Variable.
 * @n: Variable.
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int  x, y, z;

	x = n - 1;
	y = 0;
	while (y < n / 2)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		x--;
		y++;
	}
}
