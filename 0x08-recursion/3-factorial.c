#include "main.h"
/**
 * factorial- Return the factorial of a given number.
 * @n: number to get the factorial of.
 * Return: -1 error or factorial of the number.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
