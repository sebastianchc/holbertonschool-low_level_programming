#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: Variable.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	if (!n)
	{
		return (0);
	}
	va_start(list, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, unsigned int);
		i++;
	}
	va_end(list);
	return (sum);
}
