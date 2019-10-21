#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 * @d: Variable.
 */

void print_dog(struct dog *d)
{
	if (!((*d).name) && !((*d).age) && !((*d).owner))
	{
		return;
	}
	else if (!d)
	{
		return;
	}
	else
	{
		((*d).name ? printf("Name: %s\n", (*d).name) : printf("Name: (nil)\n"));
		printf("Age: %1f\n", (*d).age);
		((*d).owner ? printf("Owner: %s\n", (*d).owner) : printf("owner: (nil)\n"));
	}
}
