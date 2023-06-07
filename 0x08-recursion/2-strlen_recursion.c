#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string whose length is calculated
 * Return: length of the string in bytes
 */
int _strlen_recursion(char *s)
{
	if (s != NULL)
	{
		if (*s != '\0')
		{
			return (1 + _strlen_recursion(s + 1));
		}
		else
			return (0);
	}
	return (0);
}
