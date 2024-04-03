#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t
 * list
 * @h: list of elements
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int nbNode;

	if (!h)
		return (0);

	nbNode = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nbNode++;
	}

	return (nbNode);
}

