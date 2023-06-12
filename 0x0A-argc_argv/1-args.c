#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 * @argv: array containing the command line arguments
 * @argc: number of command line arguments passed
 * Return: 0 for code success.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
