#include "main.h"
/**
 * _sqrt_recursion - Print square root
 * @n: number to find the square root
 * @i: Possible square root
 * Return: -1 (ERROR) OR n (Success)
 */
int _sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else if (i * i == n)
		return (n);
	else if (i * i > n)
		return (-1);
	else
		return (actual_sqrt_recursion(n, i + 1));
}
