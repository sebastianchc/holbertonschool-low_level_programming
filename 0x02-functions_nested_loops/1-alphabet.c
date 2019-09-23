#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
