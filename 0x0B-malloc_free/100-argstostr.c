#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate all the arguments of my program
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: A string containing all arguments each followed by \n.
 */
char *argstostr(int ac, char **av)
{
	char *my_str;
	int m, n;
	int len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] != '\0'; n++)
			len++;
		len++;
	}
	my_str = malloc(sizeof(char) * (len + 1));
	if (my_str == NULL) return (NULL);

	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] != '\0' ; n++)
		{
			my_str[pos] = av[m][n];
			pos++;
		}
		my_str[pos] = '\n';
		pos++;
	}
	my_str[pos] = '\0';

	return (my_str);
}
