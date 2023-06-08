#include "main.h"
/**
 * check_palindrome - checks whether a string is a palindrome
 * @s: pointer that stores the string
 * @start: start index
 * @end: last index
 * Return: 1 if sting is a palindrome otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: pointer that stores the string
 * Return: 1 if string is a palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
