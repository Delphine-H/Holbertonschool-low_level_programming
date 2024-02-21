#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet x10.
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	print_alphabet();
	}
}

/**
 * print_alphabet - function that print alphabet, followed by new line.
 *
 */


void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	char caractere;
	int i;

	for (i = 0; i < 27 ; i++)
	{
	caractere = c[i];
	_putchar(caractere);
	}
}
