#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be converted to binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int size, i;
	int found = 0;

	size = sizeof(n) * 8;

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			found = 1;
		}
		else if (found || i == 0)
			_putchar('0');
	}
}
