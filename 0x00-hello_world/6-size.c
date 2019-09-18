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

	printf("Size of char: %ld byte(s)\n", sizeof(C));
	printf("Size of int: %ld byte(s)\n", sizeof(I));
	printf("Size of long int: %ld byte(s)\n", sizeof(L));
	printf("Size of long long int: %ld byte(s)\n", sizeof(LL));
	printf("Size of float: %ld byte(s)\n", sizeof(F));
	return (0);
}
