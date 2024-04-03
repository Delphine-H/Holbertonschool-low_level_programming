#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of
 * a dlistin_t list
 * @dlistint_t: list of int elements to print
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbNode;

	if (!h)
		return (0);

	while (h)
	{
		printf("d\n", h->n);
		nbNode++;
		h = h->next;
	}

	return (nbNode);
}
