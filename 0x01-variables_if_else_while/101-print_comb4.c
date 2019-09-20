#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2, num3, num4, num5, num6;

	num1 = 0;
	num2 = 1;
	num3 = 1;
	num4 = 2;
	num5 = 2;
	num6 = 2;
	while (num1 < 9)
	{
		while (num2 < 9)
		{
			while (num4 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num4 + '0');
				if (!(num1 == 7 && num2 == 8 && num4 == 9))
				{
					putchar(',');
					putchar(' ');
				}
				num4++;
			}
			num2++;
			num5++;
			num4 = num5;
		}
		num1++;
		num3++;
		num6++;
		num5 = num6;
		num2 = num3;
		num4 = num6;
	}
	putchar('\n');
	return (0);
}
