#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	int length_name = 0;
	int length_owner = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	length_name = _strlen(name);
	length_owner = _strlen(owner);

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc((length_name + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc((length_owner + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);

	return (my_dog);
}

/**
 * _strcpy - function that copies a string.
 *
 *@dest: destination
 *@src: source
 */

void _strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

}

/**
 * _strlen - function that returns the length of a string.
 *@s: pointer vers str de la fonction main
 *
 *Return: length of a string
 */
int _strlen(char *s)
{
	char *chaine = s;
	int i = 0;
	char caractere;

	do {
		caractere = chaine[i];
		i++;
	} while (caractere != '\0');

	return (i - 1);
}