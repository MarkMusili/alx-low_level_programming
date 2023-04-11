#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return the a pointer to the new duplicate string
 * @str: input string that is to be duplicated
 * Return: NULL (If no string is entered or failiure memmory alloation)
 * or pointer to the duplicated string (Success)
 */
char *_strdup(char *str)
{
	char *my_ptr;
	int m, size;

	if (str == NULL)
		return (NULL);
	for (m = 0 ; str[m] ; m++)
		size++;

	my_ptr = malloc(sizeof(char) * (size + 1));

	if (my_ptr == NULL)
		return (NULL);

	for (m = 0 ; m < size ; m++)
		my_ptr[m] = str[m];

	my_ptr[m] = '\0';

	return (my_ptr);
}
