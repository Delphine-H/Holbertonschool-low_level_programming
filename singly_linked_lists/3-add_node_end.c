#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t
 * list
 * @head: pointer to the head
 * @str: string
 * Return: address of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newData;
	list_t *lastNode;
	int lengthString = 0;

	newData = malloc(sizeof(list_t));
	if (newData == NULL)
	{
		return (NULL);
	}

	while (str[lengthString] != '\0')
	{
		lengthString++;
	}

	newData->str = strdup(str);
	newData->len = lengthString;
	newData->next = NULL;

	if (*head == NULL)
	{
		*head = newData;
		return (newData);
	}

	lastNode = *head;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newData;

	return (newData);
}
