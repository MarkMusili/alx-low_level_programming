#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a pointer of a two dimenisonal array
 * @width: width of the grid
 * @height: Height of the grid
 * Return: Pointer to the grid or else NULL on failiure
 */
int **alloc_grid(int width, int height)
{
	int **myptr, w, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	myptr = (int **)malloc(sizeof(int *) * height);
	if (myptr == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		myptr[w] = (int *)malloc(sizeof(int) * width);
		if (myptr[w] == NULL)
			return (NULL);
	}

	for (w = 0; w < width; w++)
		myptr[h][w] = 0;

	return (myptr);
}
