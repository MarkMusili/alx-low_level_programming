#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize it
 * with a specific char
 * @size: size of the array
 * @c: char to be intialized
 * Return: a pointer to the array created or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	myarray = (char *)malloc(sizeof(char) * size);
	if (myarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myarray[i] = c;
	}

	return (myarray);
}
