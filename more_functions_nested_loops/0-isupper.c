#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c character is uppercase.
 *@ c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
