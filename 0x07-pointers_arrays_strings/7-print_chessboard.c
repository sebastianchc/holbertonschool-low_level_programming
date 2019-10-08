#include "holberton.h"

/**
 * print_chessboard - Print Chessboard.
 * @a: Variable
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y, z;

	x = sizeof(*a);
	y = 0;
	while (y < x)
	{
		z = 0;
		while (z < x)
		{
			_putchar(a[y][z]);
			z++;
		}
		_putchar('\n');
		y++;
	}
}
