#include <stdio.h>
#include <stdlib.h>

/**
 * main - Numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
