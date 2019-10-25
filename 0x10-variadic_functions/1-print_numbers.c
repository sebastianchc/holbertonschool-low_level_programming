#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: Variable.
 * @n: Variable.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (!n)
	{
		return;
	}
	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
