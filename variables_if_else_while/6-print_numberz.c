#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints
 * all digit numbers of base 10 starting from 0
 * You are not allowed to use any variable of type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
