#include "holberton.h"

/**
 * print_diagonal - Print diagonal line.
 * @n: Variable
 *
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	int x, y, z;

	z = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < z; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		z = z + 1;
	}
}
