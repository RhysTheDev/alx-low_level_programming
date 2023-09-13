#include "main.h"

/**
 * free_grid - free a 2D grid previously
 * @grid: two-dimensional array to free
 * @height: input size
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL || height != 0)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}

