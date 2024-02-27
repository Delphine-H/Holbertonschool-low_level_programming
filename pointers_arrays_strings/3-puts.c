#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 *@str: pointer vers str de la fonction main
 *
 */
void _puts(char *str)
{
	char *chaine = str;
	int i = 0;
	char caractere;

	for (i = 0; chaine[i] != '\0'; i++)
	{
		caractere = chaine[i];
		_putchar(caractere);
	}
	_putchar('\n');
}
