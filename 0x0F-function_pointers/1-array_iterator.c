#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
