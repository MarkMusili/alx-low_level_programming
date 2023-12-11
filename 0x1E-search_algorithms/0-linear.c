#include "search_algos.h"
/**
 * linear_search - performs a linear search on a given array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: search value
 * Return: first index of the search element else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
