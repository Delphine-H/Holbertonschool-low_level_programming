#include "main.h"
#include <stdio.h>

/**
 * main - program that adds positive numbers.
 * @argc: count of the arguments supplied to the prog
 * @argv: an array of pointers to the strings arguments
 * Return: (0) success
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;
	int valeurs = 0;

	for (i = 1; i < argc; i++)
	{
		valeurs = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				valeurs = valeurs * 10 + (argv[i][j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + valeurs;
	}

	printf("%i\n", sum);

	return (0);
}
