#include "holberton.h"

/**
 * print_most_numbers - Print numbers from 0 to 9, except 2 and 4.
 *
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
		}
		else
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
