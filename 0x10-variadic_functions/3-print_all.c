#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - check the code for Holberton School students.
 * @list: Variable.
 *
 * Return: Nothing.
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - check the code for Holberton School students.
 * @list: Variable
 *
 * Return: Nothing.
 */

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - check the code for Holberton School students.
 * @list: variable.
 *
 * Return: Nothing.
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - check the code for Holberton School students.
 * @list: Variable.
 *
 * Return: Nothing.
 */

void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - check the code for Holberton School students.
 * @format: Variable
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	format_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	char *separator;

	va_start(list, format);
	separator = "";
	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == types[j].t1[0])
			{
				printf("%s", separator);
				types[j].t2(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
