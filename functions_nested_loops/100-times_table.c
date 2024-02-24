#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * function add spaces caracteres to align resultats.
 *@n: number
 *
  */

void print_times_table(int n)
{
	int i, j, resultat;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				resultat = i * j;
				if (resultat <= 9)
				{
					if (j > 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
					print_resultat(resultat);
				}
				else if ((resultat > 9) && (resultat <= 99))
				{
					if (j > 0)
					{
					_putchar(' ');
					}
					print_resultat(resultat);
				}
				else
				{
					print_resultat(resultat);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_resultat - function that prints the resultat, in function
 * of number digits.
 *@resultat: what is to print.
 *
 */

void print_resultat(int resultat)
{
	int firstdigit, secdigit, lastdigit;

	if (resultat <= 9)
	{
		_putchar('0' + resultat);
	}
	else if ((resultat > 9) && (resultat <= 99))
	{
		firstdigit = resultat / 10;
		lastdigit = resultat % 10;
		_putchar('0' + firstdigit);
		_putchar('0' + lastdigit);
	}
	else
	{
		firstdigit = resultat / 100;
		secdigit = resultat / 10;
		secdigit = secdigit % 10;
		lastdigit = resultat % 10;
		_putchar('0' + firstdigit);
		_putchar('0' + secdigit);
		_putchar('0' + lastdigit);
	}
}

