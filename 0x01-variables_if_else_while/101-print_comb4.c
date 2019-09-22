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
	while (x <= 789)
	{
		if ((x % 10) > ((x / 10) % 10) && ((x / 10) % 10) > (x / 100))
		{
			putchar((x / 100) + '0');
			putchar(((x / 10) % 10) + '0');
			putchar((x % 10) + '0');
			if (x < 789)
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
