#include <stdio.h>
#include <stdlib.h>

/**
 * main - From 00 to 99.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	x = 0;
	while (x <= 99)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
