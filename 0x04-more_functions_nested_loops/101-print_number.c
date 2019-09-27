#include "holberton.h"

/**
 * print_number - Print number.
 * @n: variable.
 *
 * Return: Nothing.
 */

void print_number(int n)
{
	int y;

	y = 10;
	if (n == 0)
	{
		_putchar(n + '0');
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	while (n > 0)
	{
		while (n / y > 0)
		{
			y = y * 10;
		}
		y = y / 10;
		_putchar((n / y) + '0');
		n = n % y;
	}
}
