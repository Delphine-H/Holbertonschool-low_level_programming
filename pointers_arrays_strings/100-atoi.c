#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 *@s: characters
 *
 *Return: an integer
 */

int _atoi(char *s)
{
	char signe = '+';
	int resultat = 0;

	while ((!(*s >= '0' && *s <= '9') || *s == '+' || *s == '-') && (*s != '\0'))
	{
		if (*s == '+')
		{
			signe = '+';
			s++;
		}
		else if (*s == '-')
		{
			signe = '-';
			s++;
		}
		else
		{
			signe = '+';
			s++;
		}
	}

	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		if (signe == '+')
		{
			resultat = resultat * 10 + (*s - 48);
			s++;
		}
		else
		{
			resultat = (-resultat * -10) - (*s - 48);
			s++;
		}
	}

	return (resultat);
}
