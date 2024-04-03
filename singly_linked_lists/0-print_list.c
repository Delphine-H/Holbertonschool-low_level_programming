#include "lists.h"

/**
 * size_t print_list - function that prints all elements of a list_t
 * list
 * @h: list of elements
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nbNode = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		nbNode++;
	}

	return (nbNode);
}

