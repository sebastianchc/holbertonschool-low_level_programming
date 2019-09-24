#include <unistd.h>
#include "holberton.h"

/**
 * print_sign - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
