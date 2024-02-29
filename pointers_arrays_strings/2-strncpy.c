#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 *
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointeur vers dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *pointeur = dest;
	int i;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	for (i = 0; i < n; i++)
	{
	*dest = '\0';
	}

	return (pointeur);
}
