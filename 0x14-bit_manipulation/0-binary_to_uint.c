#include "holberton.h"

/**
 * binary_to_uint - Convert binary to decimal.
 * @b: Number.
 *
 * Return: Number to decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, binary, num1, num2;

	if (!b)
	{
		return (0);
	}
	i = 0;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	binary = 1;
	num2 = 0;
	i--;
	while (b[i])
	{
		if (b[i] == '1')
		{
			num1 = 1;
			num1 *= binary;
			num2 += num1;
		}
		binary *= 2;
		i--;
	}
	return (num2);
}
