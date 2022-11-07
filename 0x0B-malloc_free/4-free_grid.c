#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees two dimensional grid
 *
 *@grid: function parameter
 *@height: function parameter
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
