#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long w, x, y, z;

	x = 1;
	y = 0;
	for (z = 0; z <= 49; z++)
	{
		printf("%ld", w = x + y);
		if (w != 20365011074)
		{
			printf(",");
			printf(" ");
		}
		y = x;
		x = w;
	}
	printf("\n");
}
