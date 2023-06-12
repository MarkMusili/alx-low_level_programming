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
	int i;

	for (i = 0 ; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
