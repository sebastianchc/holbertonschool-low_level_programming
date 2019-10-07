#include <stdio.h>
#include <stdlib.h>

/**
 * main - Reverse Alphabet.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
