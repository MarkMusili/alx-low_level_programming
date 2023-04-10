#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string -1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int m, start;

	while (str[m] != '\0')
		m++;
	if (m % 2 != 0)
		start = (m - 1) / 2;
	else
		start = m / 2;
	for (start = 0 ; start < m ; start++)
		putchar(str[start]);
	putchar('\n');
}

