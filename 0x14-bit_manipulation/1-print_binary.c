#include "holberton.h"

/**
 * print_binary - Convert number to binary.
 * @n: Number.
 *
 * Return: Number to binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
