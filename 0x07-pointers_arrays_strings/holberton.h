#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _MEMSET_H
#define _MEMSET_H
char *_memset(char *s, char b, unsigned int n);
#endif

#ifndef _MEMCPY_H
#define _MEMCPY_H
char *_memcpy(char *dest, char *src, unsigned int n);
#endif

#ifndef _STRCHR_H
#define _STRCHR_H
char *_strchr(char *s, char c);
#endif

#ifndef _STRSPN_H
#define _STRSPN_H
unsigned int _strspn(char *s, char *accept);
#endif

#ifndef _STRBRK_H
#define _STRBRK_H
char *_strpbrk(char *s, char *accept);
#endif

#ifndef _STRSTR_H
#define _STRSTR_H
char *_strstr(char *haystack, char *needle);
#endif

#ifndef _PCHESS_H
#define _PCHESS_H
void print_chessboard(char (*a)[8]);
#endif

#ifndef _PDIAG_H
#define _PDIAG_H
void print_diagsums(int *a, int size);
#endif

#ifndef _SETSTR_H
#define _SETSTR_H
void set_string(char **s, char *to);
#endif

