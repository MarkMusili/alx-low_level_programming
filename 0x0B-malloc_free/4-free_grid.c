#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the two dimensionla array created.
 * @grid: the grid created
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
