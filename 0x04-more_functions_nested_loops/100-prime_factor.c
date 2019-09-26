#include <stdio.h>
#include <stdlib.h>

/**
 * main - Task 11.
 *
 * Return: Always 0.
 */

int main(void)
{
	int y;
	unsigned long x;

	x = 612852475143;
	for (y = 1; y <= 10000; y++)
	{
		if (y == 2 || y == 3 || y == 5 || y == 7)
		{
			if (x % y == 0)
			{
				x = x / y;
			}
		}
		if (y % 2 != 0 && y % 3 != 0 && y % 5 != 0 && y % 7 != 0)
		{
			if (x % y == 0)
			{
				x = x / y;
			}
		}
	}
	printf("%lu\n", x);
	return (0);
}
