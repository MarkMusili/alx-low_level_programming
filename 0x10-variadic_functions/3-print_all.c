#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 * @...: other arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n;
	char *separator = "";
	float f;
	char *s, c;

va_start(args, format);

while (format && format[i])
{
	switch (format[i])
	{
		case 'c':
			c = va_arg(args, int);
			printf("%s%c", separator, c);
			break;
		case 'i':
			n = va_arg(args, int);
			printf("%s%d", separator, n);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%s%f", separator, f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s != NULL)
			{
				printf("%s%s", separator, s);
				break;
			}
			printf("%s(nil)", separator);
			break;
		default:
			i++;
			continue;
	}
	printf("\n");
	va_end(args);
}
}
