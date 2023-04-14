#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memmory block.
 * @ptr: pointer to the memmory previously allocated
 * @old_size: size in bytes for ptr
 * @new_size: new size for rallocation
 * Return: new_ptr (newly allcated string) ptr(previous string - failiure)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0 ; i < old_size && i < new_size ; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
