#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Conacatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: checks for the bytes
 * Return: my_ptr (Newly alocated space in memmory)
 * or NULL (programm failiure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_ptr;
	unsigned int len1, len2;
	unsigned int m, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s1);

	if (n >= len2)
		n = len2;

	my_ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (my_ptr == NULL)
		return (NULL);

	for (m = 0 ; m < len1 ; m++)
		my_ptr[m] = s1[m];
	for (i = 0 ; i < n && s2[i] != '\0'; i++)
		my_ptr[m + i] = s2[i];

	my_ptr[m + i] = '\0';
	return (my_ptr);
}
