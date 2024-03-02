#include "main.h"


/**
 *  *leet - function that encodes a string into 1337.
 *@str: text to encode
 *
 * Return: pointeur vers string
 */

char *leet(char *str)
{
	char *pointer = str;
	char aeotl[] = "aeotl";
	char AEOTL[] = "AEOTL";
	char code[] = "43071";
	int i;

	while (*str != '\0')
	{
		for (i = 0; i <= 5; i++)
		{
			if (*str == aeotl[i] || *str == AEOTL[i])
			{
				*str = code[i];
			}
		}
		str++;
	}
	return (pointer);
}

