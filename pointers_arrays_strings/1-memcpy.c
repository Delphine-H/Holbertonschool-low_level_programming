#include "main.h"

/**
 * _memcpy - function that copies n bytes of the memory area
 * src to memory area dest
 *
 *@dest: memory area
 *@src: constant byte
 *@n: number of bytes
 *Return: pointer to dest
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
