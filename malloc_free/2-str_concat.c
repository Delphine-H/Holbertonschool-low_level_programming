#include "main.h"
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: a pointer to a space contains the containt the 
 *2 strings.
*/

char *str_concat(char * s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	int i = 0;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	}

	while (s2[size_s2] != '\0')
	{
		size_s2++;
	}

	string = malloc((size_s1 + size_s2 + 1) * sizeof(char));

	if (string != NULL)
	{
		for (i = 0; i < size_s1; i++)
		{
			string[i] = s1[i];
		}
		for (i = size_s1; i < size_s1 + size_s2; i++)
		{
			string[i] = s2[i - size_s1];
		}
		string[size_s1 + size_s2 + 1] = '\0';
		return (string);
	}
	else
	{
		return (NULL);
	}



}