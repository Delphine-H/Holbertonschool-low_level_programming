#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * followed by a new line.
 *@size: size of triangle
 *
 *Return: (0) sucess
 */

void print_triangle(int size)
{
	int i, j, ii;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (ii = 1; ii < i; ii++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= (size - i); j++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
