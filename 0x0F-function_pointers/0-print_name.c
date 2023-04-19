#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_name - prints a name
 * @name: Pointer to the name
 * @f: Function pointer
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i = 0;
	char *upper_case_name;


	upper_case_name = malloc(strlen(name) + 1);
	if (upper_case_name == NULL)
		return;

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			upper_case_name[i] = name[i] - ('a' - 'A');
		else
			upper_case_name[i] = name[i];

		i++;
	}
	upper_case_name[i] = '\0';
	f(upper_case_name);
	free(upper_case_name);
}
