#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return pointer of a dog_t, and NULL if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = name;

	my_dog->age = age;

	my_dog->owner = malloc((strlen(name) + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = owner;

	return (my_dog);

}

