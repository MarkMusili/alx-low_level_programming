#include "function_pointers.h"
/**
 * array_iterator - execute a function in the elements of an array
 * @array: Array to iterate over
 * @size: size of the array
 * @action: Function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	for (s = 0 ; s < size ; s++)
		action(array[s]);

}
