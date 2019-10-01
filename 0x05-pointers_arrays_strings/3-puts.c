#include "holberton.h"

/**
 * _puts - Print a string.
 * @str: Variable.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
