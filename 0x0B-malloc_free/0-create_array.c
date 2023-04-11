#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters
 * Return: NULL (No character was set) array (success)
 * @size: size of the array
 * @c: Character input
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *my_array;

	if (size == 0)
		return (NULL);

	my_array = malloc(sizeof(char) * size);
	if (my_array == NULL)
		return (NULL);
	for (m = 0 ; m < size ; m++)
		my_array[m] = c;
	return (my_array);
}
