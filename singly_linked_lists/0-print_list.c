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

	if (h->str != NULL)
	{
		while (h)
		{
			nbNode++;
			if (h->len == 0)
			{
				printf("[0] (nill)\n");
			}
			printf("[%i] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
		}
	}
	return (nbNode);
}

