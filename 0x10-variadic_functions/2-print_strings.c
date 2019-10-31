#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @separator: Variable.
 * @n: Variable.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
