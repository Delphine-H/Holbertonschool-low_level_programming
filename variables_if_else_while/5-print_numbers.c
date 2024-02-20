#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints
 * all digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
