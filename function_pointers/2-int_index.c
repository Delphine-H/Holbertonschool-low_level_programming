#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers elements
 * @size: size of array
 * @cmp: function to compare
 * Return: index of the first element where cmp return 0
 * or -1 if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
