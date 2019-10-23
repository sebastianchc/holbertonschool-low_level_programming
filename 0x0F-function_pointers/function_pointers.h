#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _PRINT_NAME_H
#define _PRINT_NAME_H
void print_name(char *name, void (*f)(char *));
#endif

#ifndef _ARRAY_ITE_H
#define _ARRAY_ITE_H
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

#ifndef _INT_INDEX_H
#define _INT_INDEX_H
int int_index(int *array, int size, int (*cmp)(int));
#endif
