#include <unistd.h>
#include "holberton.h"

/**
 * _times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

void times_table(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((m * n) < 10)
			{
				if (n != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((m * n) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(((m * n) / 10) + '0');
				_putchar(((m * n) % 10) + '0');
			}
			if (n != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
