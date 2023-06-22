#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings separated by a comma
 * @separator: comma and a whitespace
 * @n: number of strings passed
 * Return: Strings separated by commas
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(args);
	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
