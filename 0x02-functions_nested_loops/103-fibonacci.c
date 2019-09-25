#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long v, w, x, y, z;

	x = 1;
	y = 0;
	v = 0;
	w = 0;
	while (w < 4000000)
	{
		w = x + y;
		y = x;
		x = w;
		if (w % 2 == 0)
		{
			v = v + w;
		}
	}
	printf("%ld", v);
	printf("\n");
	return (0);
}
