#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memmory using malloc
 * @b: size of memmory
 * Return: a pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *myptr = malloc(b);

	if (myptr == NULL)
		exit(98);

	return (myptr);

}
