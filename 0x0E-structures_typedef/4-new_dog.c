#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code for Holberton School students.
 * @name: V.
 * @age: V.
 * @owner: V.
 *
 * Return: dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(*ndog));
	if (!ndog)
	{
		return (0);
	}
	else
	{
		(*ndog).name = name;
		(*ndog).age = age;
		(*ndog).owner = owner;
	}
	return (ndog);
}
