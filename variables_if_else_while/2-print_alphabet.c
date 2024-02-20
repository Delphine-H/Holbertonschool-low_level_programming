#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97 ; i < 122 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
