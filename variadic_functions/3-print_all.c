#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 * 
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	f_format form[] = {
		{"c", f_char},
		{"i", f_integer},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};
	va_list args;
	int i = 0, j;
	
	va_start(args, format);
	
	while (format[i] != '\0')
	{
		j = 0;
		while (form[j].caractere != NULL)
		{
			if (*(form[j].caractere) == format[i])
			{
				form[j].f(args);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}


/**
 * f_char - print a char
 * @str: string to convert
*/
void f_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * f_integer - print an integer
 * @str: string to convert
*/
void f_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * f_float - print a float
 * @str: string to convert
*/
void f_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * f_string - print a char
 * @str: string to convert
*/
void f_string(va_list args)
{
	printf("%s", va_arg(args, char *));
}
