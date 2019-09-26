#include "holberton.h"

/**
 * print_line - Print line.
 * @n: Variable
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
