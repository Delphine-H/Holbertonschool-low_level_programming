#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments array
 * Return: (0) success
*/

int main(int argc, char *argv[])
{

	if (argc == 4)
	{
		int (*operation)(int, int) = get_op_func(argv[2]);

		if (operation != NULL)
		{
			int resultat = operation(atoi(argv[1]), atoi(argv[3]));

			printf("%d\n", resultat);
			return (0);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}