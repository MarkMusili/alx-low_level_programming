#include "main.h"
/**
 * _strspn - Entry point
 * @accept: string
 * @s: bytes to accept in the prefix
 * @n: max number of bytes to search
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int l;

	while (*s)
	{
		for (l = 0 ; accept[l] ; l++)
		{
			if (*s == accept[l])
			{
				n++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
