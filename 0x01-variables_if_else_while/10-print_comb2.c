#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
