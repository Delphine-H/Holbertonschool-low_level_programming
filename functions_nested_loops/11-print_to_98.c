#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers form n to 98.
 * @n: number
 *
 *
  */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i >= 97; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
