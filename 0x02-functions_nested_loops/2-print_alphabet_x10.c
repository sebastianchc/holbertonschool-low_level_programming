#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - Alphabet Ten Times
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
