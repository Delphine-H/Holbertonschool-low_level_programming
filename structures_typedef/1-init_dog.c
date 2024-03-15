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
	if (age >= 0)
	{
		d->age = age;
	}
	if (owner != NULL)
	{
		d->owner = owner;
	}

	printf("Ok");
}