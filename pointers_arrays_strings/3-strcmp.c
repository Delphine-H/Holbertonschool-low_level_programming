#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares 2 strings.
 *
 *@s1: string 1
 *@s2: string 2
 *Return: 0 si s1 == s2, positive si s1>s2, négative si s1<s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
		return (0);
}

