#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memmory for an array
 * @nmemb: number of elements
 * @size: bytes of memmory
 * Return: new_ptr (newly allocated memmory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_ptr = malloc(nmemb * size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size ; i++)
		new_ptr[i] = 0;

	return ((void *)new_ptr);
}
