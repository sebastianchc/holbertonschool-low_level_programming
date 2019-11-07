#include "holberton.h"

/**
 * flip_bits - Number of bits you would to flip.
 * @n: Number 1.
 * @m: Number 2.
 *
 * Return: Number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	while (n | 0)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
