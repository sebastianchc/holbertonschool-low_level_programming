#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: Variable.
 * @needle: Variable.
 *
 * Return: haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	x = 0;
	while (haystack[x])
	{
		y = 0;
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (!needle[y])
		{
			return (haystack + x);
		}
		x++;
	}
	return (0);
}
