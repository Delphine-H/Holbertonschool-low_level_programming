#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 *@n: number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (test_produit(n, 1));
}


/**
 * test_produit - function that test some produits
 * of a numbers
 *@n: number
 *@p: number to test
 *
 * Return: p if is square root or -1 if no square root find
 */

int test_produit(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}
	else if (p > n)
	{
		return (-1);
	}
	else
	{
		return (test_produit(n, p + 1));
	}
}
