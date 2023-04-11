#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer that contains  a dimensional array
 * of integers
 * @width: width of the array
 * @height: legth of the array
 * Return: NULL (if width or length is 0 or code failure)
 * or my_ptr (Success)
 */
int **alloc_grid(int width, int height)
{
	int **my_ptr;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	my_ptr = malloc(sizeof(int *) * height);

	if (my_ptr == NULL)
		return (NULL);

	for (m = 0 ; m < height; m++)
	{
		my_ptr[m] = malloc(sizeof(int) * width);
		if (my_ptr[m] == NULL)
		{
			for (n = 0 ; n < m ; n++)
				free(my_ptr[n]);

			free(my_ptr);
			return (NULL);
		}
		for (n = 0 ; n < width ; n++)
			my_ptr[m][n] = 0;
	}
	return (my_ptr);
}
