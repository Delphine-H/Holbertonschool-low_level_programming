#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - functipn that concatenates 2 strings.
 * @s1: first string
 * @s2: second string
 * n: n bites
 * Return: pointerof newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0;
	unsigned int nbchars1 = 0, nbchars2 = 0;

	while (s1[nbchars1] !=  '\0')
	{
		nbchars1++;
	}
	while (s2[nbchars2] != '\0')
	{
		nbchars2++;
	}
	if ((nbchars1 == 0) || (s1 == NULL))
	{
		s1 = "";
	}
	if ((nbchars2 == 0) || (s2 == NULL))
	{
		s2 = "";
	}
	if (nbchars2 >= n)
	{
		nbchars2 = n;
	}

	ptr = malloc((nbchars1 + nbchars2 + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < nbchars1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < nbchars2; j++)
		{
			ptr[i + j] = s2[j];
		}
		ptr[i + j] = '\0';
		return (ptr);
	}
	return (NULL);
}