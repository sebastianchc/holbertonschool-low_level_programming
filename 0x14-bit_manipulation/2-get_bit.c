#include "holberton.h"

/**
 * get_bit - Bit value.
 * @n: Number.
 * @index: Position.
 *
 * Return: Bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	if (!(n | 0))
	{
		return (-1);
	}
	return (n & 1);
}
