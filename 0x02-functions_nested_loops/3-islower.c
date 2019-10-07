#include <unistd.h>
#include "holberton.h"

/**
 * _islower - Lower.
 * @c: Variable.
 *
 * Return: 1 if is lower 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
