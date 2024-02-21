#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - function that prints alphabet x10, followed by new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	print_alphabet();
	}
}

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
