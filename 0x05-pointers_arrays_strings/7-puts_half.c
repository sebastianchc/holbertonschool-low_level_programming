#include "holberton.h"

/**
 * puts_half - Print half-string.
 * @str: Variable.
 *
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	x = 0;
	while (str[x] != '\0')
	{
		if (x > y / 2)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
