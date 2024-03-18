#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that execute a function
 * given as a parameter on each element of an array
 * @array: array to use
 * @size: array size
 * @action: pointer to the function to use
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
