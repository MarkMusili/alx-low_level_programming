#include "main.h"
/**
 * *_strchr - searches for a character in a string
 * @s: The string
 * @c: Character being searched for
 *
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
