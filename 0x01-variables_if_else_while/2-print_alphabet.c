#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabet.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
