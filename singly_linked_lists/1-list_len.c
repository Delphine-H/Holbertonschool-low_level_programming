#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * list.
 * @h: list elements
 * Return: size of the list
*/
size_t list_len(const list_t *h)
{
	int numberOfElements = 0;

	while (h)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}