#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies 2 numbers.
 * @argc: count of the arguments supplied to the prog
 * @argv: an array of pointers to the strings arguments
 * Return: (0) success
 */
int main(int argc, char **argv)
{
	long a = 0;
	long b = 0;
	int i = 0, j = 0;
	int signea = 1, signeb = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '-')
			{
				signea = -1;
			}
			else
			{
				a = a * 10 + (argv[1][i] - '0');
			}
			i++;
		}
		while (argv[2][j] != '\0')
		{
			if (argv[2][j] == '-')
			{
				signeb = -1;
			}
			else
			{
				b = b * 10 + (argv[2][j] - '0');
			}
			j++;
		}
		printf("%ld\n", signea * signeb * a * b);
		return (0);
	}
}
