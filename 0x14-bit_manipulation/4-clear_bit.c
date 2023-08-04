#include "main.h"
/**
 * clear_bit - sets value of a bit at a given index to 0
 * @n: pointer to decimal number
 * @index: index of the bit
 * Return: 1 for success or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
