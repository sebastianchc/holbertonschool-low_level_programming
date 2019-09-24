#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	if (n == 98)
	{
		printf("98\n");
	}
	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
}
