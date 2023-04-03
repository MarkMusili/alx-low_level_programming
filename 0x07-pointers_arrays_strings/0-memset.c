#include "main.h"
/**
 * _memset - fill a block of memory with the character b
 * @s: starting address of the block
 * @b: value to be filled
 * @n: number of bytes to be changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0 ; n > 0 ; i++}
	{
		s[i] = b;
		n--;
	}
	return (s);
}
