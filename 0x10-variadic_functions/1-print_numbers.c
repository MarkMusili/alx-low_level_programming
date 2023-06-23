#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers seperated by commas
 * @separator: a comma and a space character
 * @n: number of parameters
 * Return: Numbers separated by commas
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
