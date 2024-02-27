#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 *@s: pointer vers str de la fonction main
 *
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	int longueur = _strlen(s);
	char temp;

	for (i = longueur - 1; i >= longueur / 2 ; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
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
