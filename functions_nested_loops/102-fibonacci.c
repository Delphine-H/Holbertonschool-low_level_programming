#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 *Return: (0) success
 */

int main(void)
{
	fibonacci();

	return (0);
}



/**
 * fibonacci - function that prints the first 50 fibonacci numbers.
 * 
 *
 *
  */

void fibonacci(void)
{
	int i;
	long nb1 = 0;
	long nb2 = 1;
	long sum;

	for (i = 0; i < 50; i++)
	{
		sum = nb1 + nb2;
		nb1 = nb2;
		nb2 = sum;
		if (i <= 49)
		{
		printf("%lu, ", nb2);
		}
	}
	printf("%lu\n", sum);
}
