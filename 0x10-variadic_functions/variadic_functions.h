#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef SUMALL
#define SUMALL
int sum_them_all(const unsigned int n, ...);
#endif

#ifndef PRTNUM
#define PRTNUM
void print_numbers(const char *separator, const unsigned int n, ...);
#endif

#ifndef PRTSTR
#define PRTSTR
void print_strings(const char *separator, const unsigned int n, ...);
#endif

#ifndef PRTALL
#define PRTALL
void print_all(const char * const format, ...);
#endif

#ifndef TYPE
#define TYPE
#include <stdarg.h>

/**
 * struct type - Struct.
 * @t1: Type.
 * @t2: Function pointer.
 */

typedef struct type
{
	char *t1;
	void (*t2)(va_list);
} format_t;
#endif
