#include "main.h"
/**
 * _memcpy - copies bytes from one memory area
 * to another
 *@dest: memory to be copied to
 *@src: memory being copied from
 *@n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
