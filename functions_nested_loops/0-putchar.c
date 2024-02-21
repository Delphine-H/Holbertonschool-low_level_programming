#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints _putchar, followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	char caractere;
	int i;

	for (i = 0; i <= 8; i++)
	{
	caractere = c[i];	
	_putchar(caractere);
	}

	return (0);
}

