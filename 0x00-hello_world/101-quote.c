#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *A = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, A, 59);
	return (1);
}
.
