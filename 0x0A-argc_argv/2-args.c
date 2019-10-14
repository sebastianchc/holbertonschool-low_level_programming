#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: Variable.
 * @argv: Variable.
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%s\n", *(argv + x));
		x++;
	}
	return (0);
}
