#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *@b: pointer vers b de la fonction main
 *@a: pointer vers a de la fonction main
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
