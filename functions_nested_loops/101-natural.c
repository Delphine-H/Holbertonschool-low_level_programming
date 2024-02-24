#include "main.h"
#include <stdio.h>

/**
 * multiples - function that computes and print the sum of the multiples
 * of 3 or 5 below 1024.
 *
 *
  */

void multiples(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
}
