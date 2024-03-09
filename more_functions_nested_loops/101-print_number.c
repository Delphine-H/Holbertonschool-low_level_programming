#include "main.h"

/**
 * print_number - function that prints an integer
 *@n: number to print
 *
 *Return: nothing
 */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	recursion_lastdigit(n);
	}
}



/**
 * recursion_lastdigit - function that prints lastdigit
 *@n: number to print
 *
 *Return: nothing
 */

void recursion_lastdigit(int n)
{
	int lastdigit;

	if (n != 0)
	{
	lastdigit = n % 10;
	n = n / 10;
	recursion_lastdigit(n);
	_putchar(lastdigit + '0');
	}
}
