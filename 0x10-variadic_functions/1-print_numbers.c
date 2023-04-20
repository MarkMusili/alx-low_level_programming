#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: space character
 * @n: sentinel value
 * @...: list of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL || n == 0)
		return;

	va_start(nums, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
