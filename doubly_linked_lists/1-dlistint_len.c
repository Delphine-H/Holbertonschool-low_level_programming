#include "lists.h"

/**
 * add_nodeint - funtion that adds a new node at the beginning of a dobble
 * linked list
 * @h : dobble linked list of integer
 * return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int nbElements = 0;

	while (h && h->prev)
		h = h->prev;

	while (h)
	{
		nbElements++;
		h = h->next;
	}

	return (nbElements);
}