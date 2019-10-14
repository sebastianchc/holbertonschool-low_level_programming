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
	if (argc >= 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
