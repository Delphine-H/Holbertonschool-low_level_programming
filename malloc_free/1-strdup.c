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
	int lenth = 0;
	int i;
	char *copystring;

	if (str != NULL && str != "")
	{
		while (str[lenth] != '\0')
		{
			lenth++;
		}

		copystring = malloc(lenth * sizeof(char));
		
		if (copystring != NULL)
		{
			for (i = 0; i < lenth; i++)
			{
				copystring[i] = str[i];
			}
			return (copystring);
		}
	}

	return (NULL);
}