#include <unistd.h>
#include "holberton.h"

/**
 * _abs - Absolute Value of Number.
 * @c: Variable.
 *
 * Return: Absolute Value.
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else
	{
		return (c);
	}
	return (0);
}
