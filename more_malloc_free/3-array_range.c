#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of ingegers
 * @min: min include value
 * @max: max include value
 * Return: pointer of array
*/

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int nbvaleurs;
	int valeur = min;

	if (max > min)
	{
		nbvaleurs = (max - min) + 1;
		ptr = malloc(nbvaleurs * sizeof(int));
		if (ptr != NULL)
		{
			for (i = 0; i < nbvaleurs; i++)
			{
				ptr[i] = valeur;
				valeur++;
			}
			return (ptr);
		}
	}
	return (NULL);
}
