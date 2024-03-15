#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to a dog
 * Return : Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("nil");
		}

		printf("Age: %f\n", (*d).owner);

		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);	
		}
		else
		{
			printf("nil");
		}
	}
}
