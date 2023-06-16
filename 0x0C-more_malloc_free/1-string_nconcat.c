#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenante two strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * @n: number of bytes
 * Return: a pointer to the newly allocated space otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *myptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	myptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (myptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		myptr[k] = s1[i];
		k++;
	}
	for (j = 0; j < n ; j++)
	{
		myptr[k] = s2[j];
		k++;
	}
	myptr[k] = '\0';

	return (myptr);
}
