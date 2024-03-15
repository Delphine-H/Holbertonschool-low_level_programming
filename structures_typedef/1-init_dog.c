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
		exit("Ok");
	}

	if (age >= 0)
	{
		d->age = age;
	}
	else
	{
		exit("Ok");
	}

	if (owner != NULL)
	{
		d->owner = owner;
	}
	else
	{
		exit("Ok");
	}
}