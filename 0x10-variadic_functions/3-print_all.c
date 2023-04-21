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
	int l = 0;

	va_start(args, format);

	while (format[l])
	{
		switch (format[l])
		{
			case 'c':
				arg.c = (char)va_arg(args, int);
				printf("%c", arg.c);
				break;
			case 'i':
				arg.i = va_arg(args, int);
				printf("%d", arg.i);
				break;
			case 'f':
				arg.f = (float)va_arg(args, double);
				printf("%f", arg.f);
				break;
			case 's':
				arg.s = va_arg(args, char *);
				if (arg.s != NULL)
				{
					printf("%s", arg.s);
					break;
				}
				printf("(nil)");
				break;
			default:
				l++;
				continue;
		}
			if (format[l + 1] != '\0')
				printf(", ");
			l++;
		}
		printf("\n");
		va_end(args);
}
