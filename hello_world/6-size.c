#include <stdio.h>

/**
 * main - Entry point *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int taillecaractere = sizeof(char);
	int tailleentier = sizeof(int);
	int taillelong = sizeof(long);
	int tailledouble = sizeof(double);
	int taillefloat = sizeof(float);

	printf("Size of a char: %i byte(s)\n", taillecaractere);
	printf("Size of an int: %i byte(s)\n", tailleentier);
	printf("Size of a long int: %i bytes(s)\n", taillelong);
	printf("Size of a long long int: %i byte(s)\n", tailledouble);
	printf("Size of a float: %i byte(s)\n", taillefloat);

	return (0);
}
