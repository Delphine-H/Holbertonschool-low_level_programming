#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the character to check
 *
 * Return: 1 if letter (upper or lowercase), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
