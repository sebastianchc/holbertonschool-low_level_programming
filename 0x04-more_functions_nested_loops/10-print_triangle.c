#include "holberton.h"

/**
 * print_triangle - Print a triangle.
 * @size: Variable
 *
 * Return: Nothing.
 */

void print_triangle(int size)
{
	int v, w, x, y, z;

	v = 1;
	z = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 1; y < z; y++)
		{
			_putchar(' ');
		}
		for (w = 0; w < v; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
		z = z - 1;
		v = v + 1;
	}
}
