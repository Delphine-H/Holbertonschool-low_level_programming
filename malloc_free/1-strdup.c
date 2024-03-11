#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as parameter.
 * @str: string to copy
 * 
 * Return: a pointer to the duplicated string, otherwise NULL (if string = NULL)
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *copystring;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	
	if (length > 0)
	{
		copystring = malloc((length + 1) * sizeof(char));
	
		if (copystring != NULL)	
		{
			for (i = 0; i < length; i++)
			{
				copystring[i] = str[i];
			}
	
			copystring[length] = '\0';
			return (copystring);
		}
	}
	else
	{
		copystring = malloc(sizeof(char));
		if (copystring != NULL)
		{
			copystring[0] = '\0';
			return (copystring);
		}
	}

	return (NULL);
}
