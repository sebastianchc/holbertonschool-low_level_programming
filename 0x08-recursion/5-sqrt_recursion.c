#include "holberton.h"

/**
 * _square_root - Count.
 * @x: Variable.
 * @n: Variable.
 *
 * Return: square root.
 */

int _square_root(int x, int n)
{
	if (x * x <= n)
	{
		if (x * x == n)
		{
			return (x);
		}
		else
		{
			return (_square_root(x + 1, n));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Variable.
 *
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	return (_square_root(x, n));
}
