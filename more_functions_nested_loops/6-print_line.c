#include "main.h"

/**
 * print_line - function that draws a straignt line in the therminal
 * followed by a new line.
 *
 *
 */

void print_line(int n)
{
	int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
