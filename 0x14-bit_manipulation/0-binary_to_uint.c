#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to a decimal
 * @b: points to the binary to be converted
 * Return: Unsigned decimal integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;

	for (j = 0; b[j]; j++)
	{
		if (b[j] == '1')
			num += (1 << (i - 1));
		else if (b[j] != '0')
			return (0);
		i--;
	}
	return (num);
}
