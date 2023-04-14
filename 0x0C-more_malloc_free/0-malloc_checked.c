#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memmory
 * @b: size of memmory
 * Return: pointer to allocated to memmory
 * or cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *my_ptr;

	if (b == 0)
		return (NULL);

	my_ptr = malloc(sizeof(int) * b);
	if (my_ptr == NULL)
		exit(98);
	else
		return (my_ptr);
}
