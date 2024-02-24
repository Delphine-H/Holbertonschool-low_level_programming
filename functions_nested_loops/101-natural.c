#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 *Return: (0) success
 */

int main(void)
{
	sum_multiples();

	return (0);
}



/**
 * sum_multiples - function that computes and print the sum of the multiples
 * of 3 or 5 below 1024.
 *
 *
  */

void sum_multiples(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			/* printf("%i\n", i); */
			sum = sum + i;
		}
	}
	printf("%i\n", sum);
}
