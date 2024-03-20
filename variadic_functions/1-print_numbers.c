#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%i", va_arg(args, int));
		printf("%s", separator);
	}

	printf("%i\n", va_arg(args, int));

	va_end(args);
}