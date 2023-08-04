#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit in the binary form of the number
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	unsigned int size;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	value = (n >> index) & 1;

	return (value);


}
