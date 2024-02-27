#include "main.h"
#include <stdio.h>

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
