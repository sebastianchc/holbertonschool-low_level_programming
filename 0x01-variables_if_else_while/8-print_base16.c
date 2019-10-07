#include <stdio.h>
#include <stdlib.h>

/**
 * main - Base 16.
 *
 * Return: Always 0.
 */

int main(void)
{
	char x;
	char y;

	x = 48;
	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	y = 'a';
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
