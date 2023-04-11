#include "main.h"
#include<stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL (Empty string or failure)
 * or my_ptr (success)
 */
char *str_concat(char *s1, char *s2)
{
	int m, n, len1 = 0, len2 = 0;
	char *my_ptr;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	my_ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (my_ptr == NULL)
		return (NULL);

	for (m = 0 ; m < len1 ; m++)
		my_ptr[m] = s1[m];
	for (n = 0 ; n < len2 ; n++)
		my_ptr[m + n] = s2[n];

	my_ptr[m + n] = '\0';
	return (my_ptr);
}
