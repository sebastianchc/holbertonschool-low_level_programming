#include "holberton.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Variable
 *
 * Return: Nothing.
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
