#include <stdio.h>
/**
 * factorial - Prints the factorial
 * @n: input number
 * Return: -1 (Error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
