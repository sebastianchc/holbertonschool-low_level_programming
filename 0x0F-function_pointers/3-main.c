#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
	char p;

	p = argv[2][0];
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (p != "+" || p != "-" || p != "*" || p != "/" || p != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == "/" || p == "%") && argv[3][0] == "0")
	{
		printf("Error\n");
		exit(100);
	}
	
}
