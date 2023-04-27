#include "lists.h"

void print_bfr(void) __attribute__ ((constructor));
/**
 * print_bfr - prints before the main fuction
 */
void print_bfr(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
