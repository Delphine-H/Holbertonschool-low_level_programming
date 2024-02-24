#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints
 * all possible combinations of 2-2 digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int firstdigita;
	int lastdigita;
	int firstdigitb;
	int lastdigitb;

	for (i = 0 ; i <= 98 ; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			firstdigita = i / 10;
			lastdigita = i % 10;
			putchar('0' + firstdigita);
			putchar('0' + lastdigita);
			putchar(' ');
			firstdigitb = j / 10;
			lastdigitb = j % 10;
			putchar('0' + firstdigitb);
			putchar('0' + lastdigitb);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
