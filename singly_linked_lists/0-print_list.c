#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t
 * list
 * @h: list of elements
 * Description: print all elements of a linked list.
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nbNode;
	const list_t *currentNode = h;

	nbNode = 0;

	while (currentNode != NULL)
	{
		if (currentNode->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", currentNode->len, currentNode->str);
		}
		currentNode = currentNode->next;
		nbNode++;
	}

	return (currentNode);
}

