#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n : the number to check
 *
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}

}
