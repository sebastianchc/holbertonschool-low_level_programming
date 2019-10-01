#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: variable.
 * @n: Variable.
 *
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
}
