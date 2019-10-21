#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Function.
 * @str: Variable.
 *
 * Return: Array.
 */

char *_strdup(char *str)
{
	char *array;
	int x, y;

	if (!str)
	{
		return (0);
	}
	x = 0;
	while (str[x])
	{
		x++;
	}
	array = malloc((x + 1) *  sizeof(char));
	if (!array)
	{
		return (0);
	}
	y = 0;
	while (y < x)
	{
		array[y] = str[y];
		y++;
	}
	return (array);
}

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

	ndog = malloc(sizeof(struct dog));

	if (!ndog || !name || !owner)
	{
		return (0);
	}
	(*ndog).name = _strdup(name);
	if ((*ndog).name == 0)
	{
		free(ndog);
		return (0);
	}
	(*ndog).age = age;
	(*ndog).owner = _strdup(owner);
	if ((*ndog).owner == 0)
	{
		free((*ndog).name);
		free(ndog);
		return (0);
	}
	return (ndog);
}
