#include <unistd.h>
#include "holberton.h"

/**
 * _isalpha - Letter.
 * @c: Variable.
 *
 * Return: 1 if is letter 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
