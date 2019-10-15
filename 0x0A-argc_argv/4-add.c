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
	int x, y, s;

	s = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		x = 1;
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				if (argv[x][y] > 57 || argv[x][y] < 47)
				{
					printf("Error\n");
					return (1);
				}
				y++;
			}
			s = s + atoi(argv[x]);
			x++;
		}
		printf("%d\n", s);
	}
	return (0);
}
