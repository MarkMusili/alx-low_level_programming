#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings followed by a new line
 * @separator: space character
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str_list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{

		str_list = va_arg(args, const char *);
		if (str_list != NULL)
			printf("%s", str_list);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
