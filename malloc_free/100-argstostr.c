#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - function that concatenates all the arg of
 * the prog
 * @ac: argc of main
 * @av: argv of main
 * Return: pointer to new string or NULL if fails
*/

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int arg;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		total_length = total_length + _strlen(av[arg]) + 1;
	}

	str = malloc(total_length + 1);
	if (str != NULL)
	{
		str[0] = '\0';
		for (arg = 0; arg < ac; arg++)
		{
			_strcat(str, av[arg]);
			_strcat(str, "\n");
		}
	}

	return (str);
}

/**
 * _strlen - function that returns the length of a string.
 *@s: pointer vers str de la fonction main
 *
 *Return: length of a string
 */
int _strlen(char *s)
{
	char *chaine = s;
	int i = 0;
	char caractere;

	do {
		caractere = chaine[i];
		i++;
	} while (caractere != '\0');

	return (i - 1);
}

/**
 * _strcat - function that concatenates two strings overwriting
 * the terminating null byte at the end of dest
 * and then adds a terminating null byte.
 *
 *@dest: destination
 *@src: source
 *Return: pointeur vers dest
 */

char *_strcat(char *dest, char *src)
{
	char *pointeur = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (pointeur);
}