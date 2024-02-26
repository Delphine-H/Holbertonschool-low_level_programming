#include "main.h"

/**
 * _isdigit - check if c character is digit.
 *@c: character to check
 *
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
