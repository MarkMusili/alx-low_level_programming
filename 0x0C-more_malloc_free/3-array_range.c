#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: max integer
 * Return: A pointer to the newly allocated array
 */
int *array_range(int min, int max)
{
	int *myptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	myptr = (int *)malloc(sizeof(int) * size);
	if (myptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myptr[i] = min;
		min++;
	}

	return (myptr);
}
