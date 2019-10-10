#include "holberton.h"

/**
 * _prime - Count.
 * @x: Variable.
 * @n: Variable.
 *
 * Return: .
 */

int _prime(int x, int n)
{
	if (n > 1)
	{
		if (n % x == 0 && x == n)
		{
			return (1);
		}
		else if (n % x != 0 && x < n)
		{
			return (_prime(x + 1, n));
		}
	}
	return (0);
}

/**
 * is_prime_number - function that get if the input integer is a prime number.
 * @n: Variable.
 *
 * Return: Is Prime.
 */

int is_prime_number(int n)
{
	int x;

	x = 2;
	return (_prime(x, n));
}
