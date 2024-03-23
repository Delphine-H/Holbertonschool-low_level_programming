#include <stdio.h>
#include <stdlib.h>

int pieces25(int montant);
int pieces10(int montant);
int pieces5(int montant);
int pieces2(int montant);

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: nb of arguments
 * @argv: list of arguments
 * Return: (0) sucess or (1) if Error
*/
int main(int argc, char *argv[])
{
	int montant;
	int nb_pieces = 0;
	int nbpieces25, nbpieces10, nbpieces5, nbpieces2;

	if (argc > 2)
	{
		printf("Error");
		return (1);
	}

	montant = atoi(argv[1]);

	nbpieces25 = pieces25(montant);
	montant -= nbpieces25 * 25;

	nbpieces10 = pieces10(montant);
	montant -= nbpieces10 * 10;

	nbpieces5 = pieces5(montant);
	montant -= nbpieces5 * 5;

	nbpieces2 = pieces2(montant);
	montant -= nbpieces2 * 2;

	nb_pieces = nbpieces25 + nbpieces10 + nbpieces5 + nbpieces2 + montant;

	printf("%i\n", nb_pieces);

	return (0);
}

/**
 * pieces25 - nb of pieces 25 cents
 * @montant: amount
 * Return: nb pieces
*/
int pieces25(int montant)
{
	int nbpieces25 = 0;

	while ((montant - ((nbpieces25 + 1) * 25)) >= 0)
	{
		nbpieces25++;
	}
	return (nbpieces25);
}

/**
 * pieces10 - nb of pieces 10 cents
 * @montant: amount
 * Return: nb pieces
*/
int pieces10(int montant)
{
	int nbpieces10 = 0;

	while ((montant - ((nbpieces10 + 1) * 10)) >= 0)
	{
		nbpieces10++;
	}
	return (nbpieces10);
}

/**
 * pieces5 - nb of pieces 5 cents
 * @montant: amount
 * Return: nb pieces
*/
int pieces5(int montant)
{
	int nbpieces5 = 0;

	while ((montant - ((nbpieces5 + 1) * 5)) >= 0)
	{
		nbpieces5++;
	}
	return (nbpieces5);
}

/**
 * pieces2 - nb of pieces 2 cents
 * @montant: amount
 * Return: nb pieces
*/
int pieces2(int montant)
{
	int nbpieces2 = 0;

	while ((montant - ((nbpieces2 + 1) * 2)) >= 0)
	{
		nbpieces2++;
	}
	return (nbpieces2);
}
