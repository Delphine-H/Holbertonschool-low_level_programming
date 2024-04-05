#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 * @h: pointer to the head node
 * @idx: index of the list where the new node should be add
 * @n: n int value of the new node
 * Return: address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int indexOfCurrentNode = 0;
	dlistint_t *newData;

	newData = malloc(sizeof(dlistint_t));
	if (newData == NULL)
		return (NULL);
	newData->n = n;
	newData->next = NULL;
	newData->prev = NULL;

	while (*h && indexOfCurrentNode < idx)
	{
		(*h) = (*h)->next;
		indexOfCurrentNode++;
	}

	if (indexOfCurrentNode == idx)
	{
		((*h)->prev)->next = newData;
		newData->next = (*h);
		newData->prev = ((*h)->prev);
	}

	return (newData);

}