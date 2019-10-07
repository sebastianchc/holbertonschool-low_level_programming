#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabets.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;
	char ALPHA;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	ALPHA = 'A';
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
