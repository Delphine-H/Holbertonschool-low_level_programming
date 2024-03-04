#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 *@s: string
 *@accept: characters to search
 *Return: the number of bytes in the string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;
	int trouve = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				trouve = 1;
			}
			j++;
		}

		if (trouve == 1)
		{
			count++;
		}
		trouve = 0;
		i++;
	}
	return (count);
}
