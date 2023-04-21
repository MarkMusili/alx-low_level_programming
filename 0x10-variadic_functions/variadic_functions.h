#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

struct format
	{
		int i;
		float f;
		char c;
		char *s;
	}arg;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
