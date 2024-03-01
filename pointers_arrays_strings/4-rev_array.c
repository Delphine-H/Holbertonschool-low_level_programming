#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 *@a: array of integers
 *@n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int val1, val2;

	while (i <= (n / 2))
	{
		val1 = a[i];
		val2 = a[j];
		a[i] = val2;
		a[j] = val1;
		i++;
		j--;
	}
}

