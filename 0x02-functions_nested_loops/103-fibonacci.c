#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fibonacci.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long v, w, x, y, z;

	x = 1;
	y = 0;
	v = 0;
	for (z = 0; z <= 50; z++)
	{
		w = x + y;
		y = x;
		x = w;
		if (w % 2 == 0 && w < 4000000)
		{
			v = v + w;
		}
	}
	printf("%ld\n", v);
	return (0);
}
