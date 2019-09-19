#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	num2 = 1;
	num3 = 1;
	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (!(num1 == 8 && num2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num3++;
		num2 = num3;
	}
	putchar('\n');
	return (0);
}
