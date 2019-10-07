#include <stdio.h>
#include <stdlib.h>

/**
 * main - Comb.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 1;
	z = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			if (y > x)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x < 98 || y < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		z++;
		y = z;
	}
	putchar('\n');
	return (0);
}
