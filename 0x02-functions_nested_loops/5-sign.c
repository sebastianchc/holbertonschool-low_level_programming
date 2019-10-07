#include <unistd.h>
#include "holberton.h"

/**
 * print_sign - Positive or Negative.
 * @n: Variable.
 *
 * Return: 1 positive, -1 negative.
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
