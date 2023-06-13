#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 * Return: a pointer to the concatenated string or else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *myptr;
	int i, m, k = 0;
	size_t len1 = 0;
	size_t len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0' && s2[len2] != '\0')
	{
		len1++;
		len2++;
	}
	myptr = (char *)malloc(sizeof(char) * (len1 + len2 + 2));
	if (myptr == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0'; i++)
	{
		myptr[k] = s1[i];
		k++;
	}
	for (m = 0; s2[m] != '\0'; m++)
	{
		myptr[k] = s2[m];
		k++;
	}
	myptr[k] = '\0';

	return (myptr);
}
