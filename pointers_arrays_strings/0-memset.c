#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 *@s: memory area
 *@b: constant byte
 *@n: number of bytes
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
