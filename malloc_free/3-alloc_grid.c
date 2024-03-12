#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: array width
 * @height: array height
 * Return: NULL on failure, 0 success
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int row, column;

	if (width != 0 && height != 0)
	{
		grid = malloc(height * sizeof(int *));
		if (grid == NULL)
		{
			return (NULL);
		}
		for (row = 0; row < height; row++)
		{
			grid[row] = malloc(width * sizeof(int));
			if (grid[row] == NULL)
			{
				for (int i = 0, i < row; i++)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			for (column = 0; column < width; column++)
			{
				grid[row][column] = 0;
			}
		}
		return (grid);
	}
	return (NULL);
}