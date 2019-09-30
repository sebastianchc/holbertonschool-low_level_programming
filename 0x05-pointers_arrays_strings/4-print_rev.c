#include "holberton.h"

/**
 * print_rev - Print a string.
 * @s: Variable
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
