#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array to be iterated
 * @size: size of array
 * @cmp: Fuction pointer that takes one argument
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if ((*cmp)(array[i] != 0))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
