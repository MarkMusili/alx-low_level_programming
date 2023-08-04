#include "main.h"
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: decimal number
 * @index: to be changed starting from 0
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
