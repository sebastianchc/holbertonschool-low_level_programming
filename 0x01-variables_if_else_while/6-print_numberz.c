#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	printf("\n");
	return (0);
}