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
	struct dog *dog_t = malloc(sizeof(*dog_t));

	if (dog_t)
	{
		(*dog_t).name = name;
		(*dog_t).age = age;
		(*dog_t).owner = owner;
		return (dog_t);
	}
	else
	{
		return (0);
	}
}
