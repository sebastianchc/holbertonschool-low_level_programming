#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;
	int I;
	long int L;
	long long int LL;
	float F;

	printf("Size of a char: %ld byte(s)\n", sizeof(C));
	printf("Size of an int: %ld byte(s)\n", sizeof(I));
	printf("Size of a long int: %ld byte(s)\n", sizeof(L));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(LL));
	printf("Size of a float: %ld byte(s)\n", sizeof(F));
	return (0);
}
.
