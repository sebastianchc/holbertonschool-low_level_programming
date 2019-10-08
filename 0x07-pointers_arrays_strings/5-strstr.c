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
		while (needle[y])
		{
			if (haystack[x] != needle[y])
			{
				break;
			}
			else if (haystack[x] == needle[y])
			{
				return (haystack + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}
