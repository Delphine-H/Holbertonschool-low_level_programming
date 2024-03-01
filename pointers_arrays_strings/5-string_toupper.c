#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letter of a string
 * to uppercase.
 *@str: string to convert
 *
 *Return: pointeur vers string
 */

char *string_toupper(char *str)
{
	char *pointer = str;
	char ABCD[26];
	char abcd[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		ABCD[i] = 'A' + i;
		abcd[i] = 'a' + i;
	}

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 26; i++)
			{
				if (*str == abcd[i])
				{
					*str = ABCD[i];
				}
			}
		}
		str++;
	}

	return (pointer);
}
