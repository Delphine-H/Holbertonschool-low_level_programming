#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: pointer of a dog struct
 * @name: name
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	
}