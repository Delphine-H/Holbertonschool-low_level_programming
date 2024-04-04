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

	lengthString = _strlen(str);

	newData = malloc(sizeof(list_t));
	if (newData == NULL)
	{
		return (NULL);
	}
	newData->str = strdup(str);
	newData->len = strlen(str);
	newData->next = *head;
	*head = newData;

	return (newData);
}

/**
 * _strlen - function that count char of a string
 * @str: string to analyse
 * Return: length of the string
*/
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
