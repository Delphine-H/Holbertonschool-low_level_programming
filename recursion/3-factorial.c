#include "main.h"

/**
 * factorial - function that returns the factorial of a given nb.
 *@n: number
 * Return: factorial
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

