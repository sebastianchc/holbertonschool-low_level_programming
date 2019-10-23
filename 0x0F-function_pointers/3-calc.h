#ifndef CALC
#define CALC

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif

#ifndef ADD
#define ADD
int op_add(int a, int b);
#endif

#ifndef SUB
#define SUB
int op_sub(int a, int b);
#endif

#ifndef MUL
#define MUL
int op_mul(int a, int b);
#endif

#ifndef DIV
#define DIV
int op_div(int a, int b);
#endif

#ifndef MOD
#define MOD
int op_mod(int a, int b);
#endif
