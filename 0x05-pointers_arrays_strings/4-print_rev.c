#include "holberton.h"

/**
 * print_rev - Print a string.
 * @s: Variable.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
