#include "main.h"

/**
 * puts_half - function that print half of string followed by new line.
 * if the nb of char is odd, function should print last n char.
 *@str: string to print
 *
 */
void puts_half(char *str)
{
	int i;
	int longueur = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		longueur++;
	}

	if (longueur % 2 == 0)
	{
		for (i = longueur / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (longueur / 2) ; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
