#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints
 * all possible combinations of single-digit numbers. 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i <= 56 ; i++)
	{
		putchar(i);
		putchar(44);
		putchar(0);
	}
	putchar(57);

	return (0);
}
