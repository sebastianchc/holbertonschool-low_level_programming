#include "holberton.h"

/**
 * print_square - Print a square.
 * @size: Variable
 *
 * Return: Nothing.
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
