#include <unistd.h>
#include <stdio.h>

/**
 * main - Standar Error.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, x, 59);
	return (1);
}
