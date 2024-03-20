#ifndef MAIN
#define MAIN

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void f_char(va_list args);
void f_integer(va_list args);
void f_float(va_list args);
void f_string(va_list args);

/**
 * struct f - format print all
 * 
 * @caractere: the char passed
 * @f: the function associated
*/
typedef struct f
{
	char *caractere;
	void (*f)(va_list);
}f_format;


#endif