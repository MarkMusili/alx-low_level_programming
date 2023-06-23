#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints character
 * @args: argument given
 * Return: nothing
 */
void print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	printf("%c", c);

}
/**
 * print_int - prints an integer
 * @args: argument given
 * Return: nothing
 */
void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_float - prints floating point number
 * @args: argument given
 * Return: nothing
 */
void print_float(va_list args)
{
	double f;

	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @args: argument given
 * Return: nothing
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: either integers, strings or characters
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;

	va_start(args, format);
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				ptr++;
				continue;
		}
		if (*(ptr + 1) != '\0')
			printf(", ");
		ptr++;
	}
	printf("\n");
	va_end(args);
}
