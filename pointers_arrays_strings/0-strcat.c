#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings overwriting
 * the terminating null byte at the end of dest
 * and then adds a terminating null byte.
 *
 *@dest: destination
 *@src: source
 *Return: pointeur vers dest
 */

char *_strcat(char *dest, char *src)
{
	char *pointeur = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pointeur);
}
