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
	if (*s)
	{
		_puts_recursion(s);
	}
	if (!*s)
	{
		_putchar('\n');
	}
}
