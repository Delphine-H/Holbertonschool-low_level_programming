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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';

	return (pointeur);
}
