#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the alphabet in lowercase
 * followed by a new line. Print letters except q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i != 97 && i != 101)
		putchar(i);
	}
	putchar(10);
	return (0);
}
