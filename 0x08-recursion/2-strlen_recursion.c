#include <stdio.h>
/**
 * _strlen_recursion - Prints length of a string
 * @s: pointer to a string
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
