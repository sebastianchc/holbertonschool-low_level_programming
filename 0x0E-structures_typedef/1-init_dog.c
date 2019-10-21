#include "dog.h"

/**
 * init_dog - check the code for Holberton School students.
 * @d: V.
 * @name: V.
 * @age: V.
 * @owner: V.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
