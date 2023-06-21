#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: an array of integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of the first encounter of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}

	return (-1);

}
