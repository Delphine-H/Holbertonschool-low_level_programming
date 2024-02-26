#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * followed by a new line.
 *
 *
 *Return: (0) sucess
 */

void print_triangle(int size)
{
	int i, j, ii;

	for (i = size; i > 0; i--)
	{
		for (ii = 1; ii < i; ii++) 
		{
			_putchar(' ');
		}
		for (j = 0; j <= (size -i); j++)
		{	
		_putchar('#');
		}
	_putchar('\n');
	}
}
