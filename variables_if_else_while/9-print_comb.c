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
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar(10);
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}

	return (0);
}
