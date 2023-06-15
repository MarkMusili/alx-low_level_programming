#include "main.h"
#include <stdlib.h>
/**
 * calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: A pointer to the allocated memmory or else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myptr;
	unsigned int i, SIZE;

	if (nmemb == 0 || size == 0)
		return (NULL);

	SIZE = nmemb * size;
	myptr =malloc(SIZE);
	if (myptr == NULL)
		return (NULL);

	for (i = 0; i < SIZE; i++)
	{
		myptr[i] = 0;
	}
	return (myptr);
}
