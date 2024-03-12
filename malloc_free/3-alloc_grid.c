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
	int i,j;
	
	if (width != 0 && height != 0)
	{
		grid = (int **) malloc(width * height * sizeof(int));
		if (grid != NULL)
		{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
		}
	}

	return (NULL);
}