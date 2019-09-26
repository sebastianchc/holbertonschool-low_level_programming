#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: Variable
 *
 * Return: Always 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
