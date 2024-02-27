#include "main.h"

/**
 * print_rev - function that prints a string in reverse.
 * followed by a new line.
 *@s: pointer vers str de la fonction main
 *
 */

void print_rev(char *s)
{
	char *chaine = s;
	int i = 0;
	char caractere;
	int longueur;

	longueur = _strlen(s);

	for (i = longueur; i >= 0 ; i--)
	{
		caractere = chaine[i];
		_putchar(caractere);
	}
	_putchar('\n');
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

