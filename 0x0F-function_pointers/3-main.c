#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Answer.
 */

int main(int argc, char **argv)
{
	char p;
	int num1, num2, answer;
	int (*operator)(int, int);

	p = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (p != '+' && p != '-' && p != '*' && p != '/' && p != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((p == '/' || p == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	operator = get_op_func(argv[2]);
	answer = operator(num1, num2);
	printf("%d\n", answer);
	return (answer);
}
