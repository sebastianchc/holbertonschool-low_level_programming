#include <unistd.h>
#include "holberton.h"

/**
 * print_last_digit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
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
