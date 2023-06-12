#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argv: array containing the command line arguments
 * @argc: number of command line arguments passed
 * Return: 0 for code success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[2]) * atoi(argv[3]));

	return (0);
}
