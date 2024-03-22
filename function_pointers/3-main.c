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
	int (*operation)(int, int);
	char op;

	if (argc == 4)
	{
		operation = get_op_func(argv[2]);

		if (operation != NULL && argv[2][1] == '\0')
		{
			op = *(argv[2]);
			if ((op == '/' || op == '%') && atoi(argv[3]) == 0)
			{
				printf("Error\n");
				exit(100);
			}
			printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
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
