#include "search_algos.h"
/**
 * binary_search - Performs a binary search
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: search value
 * Return: pointer to the index of the search element else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high;
	int i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		if (value > mid)
			low = mid + 1;
	}
	return (-1);
}
