#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src
 *
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointeur vers dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointeur = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pointeur);
}
