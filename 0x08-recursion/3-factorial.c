#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Variable.
 *
 * Return: n! or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n + 1);
}
