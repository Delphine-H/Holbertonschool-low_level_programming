#include "dog.h"
#include <stdio.h>

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
		d->name = "";
	}

	if (age >= 0)
	{
		d->age = age;
	}
	else
	{
		d->age = 0;
	}

	if (owner != NULL)
	{
		d->owner = owner;
	}
	else
	{
		d->owner = "";
	}

	if (name == NULL || !(age >= 0) || (owner == NULL))
	{
	printf("Ok\n");
	}
}