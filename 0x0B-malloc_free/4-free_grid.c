#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free the memmory previously allocated by alloc_grind
 * @grid: pointer to the memmory to be freed
 * @height: height of the memmory
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0 ; m < height ; m++)
		free(grid[m]);
	free(grid);
}
