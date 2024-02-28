#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to src, including the
 * termination null byte (\0), to the buffer pointed by dest
 *
 *@dest: destination
 *@src: source
 *Return: pointeur vers dest
 */

char *_strcpy(char *dest, char *src)
{
	char *pointeur = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pointeur);
}
