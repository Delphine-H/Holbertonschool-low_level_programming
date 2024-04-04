#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dobble linked list
 * @head: pointer to the head of list
 * @index: number of the node to return
 * Return: node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	unsigned int nbNode;

	nbNode = dlistint_len(head);

	if (index > nbNode)
		return (NULL);

	while (head->prev)
	{
		head = head->prev;
	}

	while (node < index)
	{
		node++;
		head = head->next;
	}

	return (head);
}

/**
 * dlistint_len - funtion that returns the number of elements in a linked
 * list
 * @h : dobble linked list of integer
 * Return: number of elements
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

