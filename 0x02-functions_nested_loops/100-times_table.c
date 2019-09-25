#include <unistd.h>
#include "holberton.h"

/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if ((x * y) < 10)
				{
					if (y != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((x * y) + '0');
				}
				else if ((x * y) >= 10 && (x * y) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(((x * y) / 10) + '0');
					_putchar(((x * y) % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(((x * y) / 100) + '0');
					_putchar((((x * y) / 10) % 10) + '0');
					_putchar(((x * y) % 10) + '0');
				}
				if (y != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
d
