#include <unistd.h>
#include "holberton.h"

/**
 * _abs - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
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
