#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * @argc: Variable
 * @argv: Variable.
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	int x, y, z;
	int w[] = {25, 10, 5, 2, 1};

	y = 0;
	x = 0;
	if (argc == 2)
	{
		z = atoi(argv[argc - 1]);
		while (z > 0)
		{
			y = y + (z / w[x]);
			z = z % w[x];
			if (z % w[x] != 0)
			{
				x++;
			}
		}
		printf("%d\n", y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
