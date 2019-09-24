#include <unistd.h>
#include "holberton.h"

/**
 * add - writes the character c to stdout
 * @c: The character to print
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

int add(int c, int n)
{
	return (c + n);
}
