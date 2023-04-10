#include "main.h"
/**
 * char*_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x, m = 0;

	while (src[m] != '\0')
	{
		m++;
	}
	for (x = 0 ; x < m ; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

