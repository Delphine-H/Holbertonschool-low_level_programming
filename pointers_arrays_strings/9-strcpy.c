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
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i + 1] = src[i + 1];

	return (dest);
}
