#include "main.h"

/**
 * _memset - function that copies n bytes of the memory area
 * src to memory area dest
 *
 *@s: memory area
 *@b: constant byte
 *@n: number of bytes
 *Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
