#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int m;

	while (str[m] != '\0')
	{
		putchar(str[m]);
		m += 2;
	}
	putchar('\n');
}
