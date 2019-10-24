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
	char p1, p2, p3;
	int num1, num2, answer;
	int (*operator)(int, int);

	p1 = argv[2][0];
	p2 = argv[2][1];
	p3 = argv[3][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((p1 != '+' && p1 != '-' && p1 != '*' && p1 != '/' && p1 != '%')
	    || (p2))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((p1 == '/' || p1 == '%') && p3 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	operator = get_op_func(argv[2]);
	answer = operator(num1, num2);
	printf("%d\n", answer);
	return (0);
}
