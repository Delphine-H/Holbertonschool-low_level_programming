#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input is prime
 * otherwise return 0
 *@n: number
 *
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	return (test_diviseur(n, 2));
}

/**
 * test_diviseur - function that test a diviseur
 *
 *@n: number
 *@d: diviseur
 *
 * Return: 1 if prime 0 otherwise
 */

int test_diviseur(int n, int d)
{
	if (d >= n)
	{
		return (1);
	}

	if (n % d == 0)
	{
		return (0);
	}

	return (test_diviseur(n, d + 1));
}
