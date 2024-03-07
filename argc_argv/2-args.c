#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * by a new line
 * @argc: count of the arguments supplied to the prog
 * @argv: an array of pointers to the strings arguments
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{	
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);

	}

	return (0);
}
