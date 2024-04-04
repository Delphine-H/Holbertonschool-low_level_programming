#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * list.
 * @head: pointer to the head
 * @str: string that need to be duplicated
 * Return: pointer to the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newData;
	int lengthString = 0;

	while (str[lengthString] != '\0')
	{
		lengthString++;
	}

	newData = malloc(sizeof(list_t));
	if (newData == NULL)
	{
		return (NULL);
	}
	newData->str = strdup(str);
	newData->len = lengthString;
	newData->next = *head;
	*head = newData;

	return (newData);
}


