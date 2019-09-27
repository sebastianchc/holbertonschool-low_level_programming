#include "holberton.h"

/**
 * print_number - Print number.
 * @n: variable.
 *
 * Return: Nothing.
 */

void print_number(int n)
{
	int w;

	w = 10;
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
		while (n / w > 0)
		{
			w = w * 10;
		}
		w = w / 10;
		_putchar((n / w) + '0');
		n = n % w;
	}
}
