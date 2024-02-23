#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 *
  */

void times_table(void)
{
	int i;
	int j;
	int resultat;
	int firstdigit;
	int lastdigit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			resultat = i * j;
			if (resultat <= 9)
			{
				if (j > 0)
				{
				_putchar(' ');
				}
				_putchar('0' + resultat);
			}
			else
			{
				firstdigit = resultat / 10;
				lastdigit = resultat % 10;
				_putchar('0' + firstdigit);
				_putchar('0' + lastdigit);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
