#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n : the number to check
 *
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
	n = n % 10 * -1;
	}
	else
	{
	n = n % 10;
	}

	_putchar('0' + n);

	return (n);
}
