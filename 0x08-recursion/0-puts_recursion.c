#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * @s: Variable.
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != 0)
	{
		_puts_recursion(s);
	}
	if (*s == 0)
	{
		_putchar('\n');
	}
}
