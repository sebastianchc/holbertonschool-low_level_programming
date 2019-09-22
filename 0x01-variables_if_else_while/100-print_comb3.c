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

	x = 1;
	while (x <= 89)
	{
		if ((x % 10) > (x / 10))
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
