#include "holberton.h"

/**
 * clear_bit - Set the value of a bit to 0.
 * @n: Number.
 * @index: Position.
 *
 * Return: New number.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int count;

	count = 1;
	if (index > 63)
	{
		return (-1);
	}
	count = count << index;
	num = *n;
	num = ((num >> index) & 1);
	if (num)
	{
		*n ^= count;
	}
	return (1);
}
