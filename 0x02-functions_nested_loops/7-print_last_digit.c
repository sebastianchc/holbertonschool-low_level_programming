#include <unistd.h>
#include "holberton.h"

/**
 * print_last_digit - Get Last Digit.
 * @c: Variable.
 *
 * Return: Last Digit.
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		_putchar(((c % 10) * (-1)) + '0');
		return ((c % 10) * (-1));
	}
	else
	{
		_putchar((c % 10) + '0');
		return ((c % 10));
	}
}
