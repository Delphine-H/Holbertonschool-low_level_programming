#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to src, including the
 * termination null byte (\0), to the buffer pointed by dest
 *
 *@dest: destination
 *@src: source
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int longueur;
	char nullChar = 0;

	while (src[longueur] != '\0')
	{
		longueur++;
	}

	for (i = 0; i < longueur; i++)
	{
		dest[i] = src[i];
	}
	
	dest[longueur] = nullChar;

	return (dest);
}