#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memmory using malloc
 * @b: size of memmory
 * exit: 98 for normal process termination if the it fails
 * Return: a pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *myptr;

	myptr = malloc(b);
	if (myptr == NULL)
		exit(98);
	else
		return (myptr);
}
