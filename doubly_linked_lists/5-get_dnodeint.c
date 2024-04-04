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
