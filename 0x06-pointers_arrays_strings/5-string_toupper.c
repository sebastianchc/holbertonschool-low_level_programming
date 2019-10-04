#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @src: Variable.
 *
 * Return: *src.
 */

char *string_toupper(char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		if (src[x] >= 97 && src[x] <= 122)
		{
			src[x] = src[x] - 32;
		}
		x++;
	}
	return (src);
}
