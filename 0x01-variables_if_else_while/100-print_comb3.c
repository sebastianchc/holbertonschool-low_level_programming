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

	num1 = 48;
	num2 = 49;
	while (num1 <= 57)
	{
		putchar(num1);
		num1++;
		while (num2 <= 57)
		{
			putchar(num2);
			num2++;
		}
	}
	return (0);
}
