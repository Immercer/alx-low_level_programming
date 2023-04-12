#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: 2D grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
