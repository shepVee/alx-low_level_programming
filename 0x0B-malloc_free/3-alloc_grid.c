#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - two dimensional array
 *
 *@width: width
 *@height: height
 *
 *Return: pointer to int value
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int k, l;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			grid[k][l] = 0;

	return (grid);
}


