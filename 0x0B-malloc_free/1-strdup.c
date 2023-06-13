#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocates a space in memory that contains
 * a copy of a string
 * @str: string to be copied from
 * Return: a pointer to the newly allocated space or else NULL
 */
char *_strdup(char *str)
{
	char *myptr;
	int i;
	size_t len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	myptr = (char *)malloc(sizeof(char) * (len + 1));
	if (myptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		myptr[i] = str[i];
	}

	return (myptr);
}
