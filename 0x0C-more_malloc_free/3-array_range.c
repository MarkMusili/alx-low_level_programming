#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: Start value
 * @max: End value
 * Return: my_ptr (Pointer to the array that contains the value)
 */
int *array_range(int min, int max)
{
	int *my_ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	my_ptr = malloc(sizeof(int) * size);
	if (my_ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		my_ptr[i] = min + i;

	return (my_ptr);
}
