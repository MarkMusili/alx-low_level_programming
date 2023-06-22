#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: either integers, strings or characters
 */
void print_all(const char * const format, ...)
{
	int i;
	double f;
	char *s;
	char c;
	va_list args;
	const char *ptr = format;

	va_start(args, format);
	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%c", c);
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (*ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}
		ptr++;
		while (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')
		{
			printf(", ");
			break;
		}
	}	
	printf("\n");
	va_end(args);
}
