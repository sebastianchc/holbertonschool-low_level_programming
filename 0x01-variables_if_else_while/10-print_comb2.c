#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	num = 0;
	while (num <= 100)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
