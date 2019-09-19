#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char base1;
	char base6;

	base1 = 48;
	while (base1 <= 57)
	{
		putchar(base1);
		base1++;
	}
	base6 = 'a';
	while (base6 <= 'f')
	{
		putchar(base6);
		base6++;
	}
	putchar('\n');
	return (0);
}
