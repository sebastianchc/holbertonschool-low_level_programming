#include "holberton.h"

/**
 * set_bit - Set the value of a bot to 1.
 * @n: Number.
 * @index: Position.
 *
 * Return: New number.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int count;

	count = 1;
	if (index > 63)
	{
		return (-1);
	}
	i = 0;
	while (i < index)
	{
		count *= 2;
		i++;
	}
	if (!(*n ^ count))
	{
		*n ^= count;
	}
	return (1);
}
