#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate the sum of its parameters
 * @n: sentinel value
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list pars;

	if (n == 0)
		return (0);

	va_start(pars, n);

	for (i = 0 ; i < n ; i++)
		result += va_arg(pars, int);

	va_end(pars);
	return (result);
}
