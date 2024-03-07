#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers.
 *
 * @argc: count of the arguments supplied to the prog
 * @argv: an array of pointers to the strings arguments
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	long a = 0;
	long b = 0;
	int i = 0;
	int j = 0;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}	
	else
	{	
		while (argv[1][i] != '\0')
		{
			a = a * 10 + (argv[1][i] - '0');
			i++;
		}	
		while (argv[2][j] != '\0')
		{
			b = b * 10 + (argv[2][j] - '0');
			j++;
		}

		printf("%ld\n", a * b);
	}

	return (0);
}
