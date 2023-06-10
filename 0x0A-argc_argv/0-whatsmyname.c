#include "main.h"
#include <stdio.h>
/**
 * main - entry point of the code
 * @argc: number of command line arguments passed to it
 * @argv: an array containing the command line arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[0][i] != '\0'; i++)
		putchar(argv[0][i]);
	putchar('\n');

	return (0);
}
