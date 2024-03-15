#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type
 * @d: pointer of a dog struct
 * @name: name
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL)
	{
		d->name = name;
	}
	else
	{
		exit(1);
	}

	if (age >= 0)
	{
		d->age = age;
	}
	else
	{
		exit(1);
	}

	if (owner != NULL)
	{
		d->owner = owner;
	}
	else
	{
		exit(1);
	}
}