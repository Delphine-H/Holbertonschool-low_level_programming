#include "main.h"

/**
 * print_diagonal- function that draws a diagonal line on the therminal
 *
 *@n: number of \
 *
 */

void print_diagonal(int n)
{
	int i, j;

		for (i = 0; i <= n; i++)
		{
			if (i > 0)
			{
				for (j = 1; j < i; j++)	
				{
					_putchar(' ');
				}	
				_putchar('\\');
			}
		_putchar('\n');
		}
}
