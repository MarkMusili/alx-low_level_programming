#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all parameters
 * @n: number of parameters
 * Return: sum of all numbers or 0 if no parameters passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, total = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		total += num;
	}
	return (total);
}
