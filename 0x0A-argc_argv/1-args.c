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
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
