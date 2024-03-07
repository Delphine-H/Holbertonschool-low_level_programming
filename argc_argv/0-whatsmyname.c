#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name followed
 * by a new line
 * @argc: count of the arguments supplied to the prog
 * @argv: an array of pointers to the strings arguments
 *
 * Return: (0) success
 */

int main(int argc, char **argv)
{
	(void) argc;
	
	printf("%s\n", argv[0]);

	return (0);
}
