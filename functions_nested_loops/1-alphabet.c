#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - function that prints alphabet, followed by new line.
 *
 * Return: Always 0 (Success)
 */


int print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	char caractere;
	int i;

	for (i = 0; i < 26 ; i++)
	{
	caractere = c[i];
	_putchar(caractere);
	}

	return (0);
}
