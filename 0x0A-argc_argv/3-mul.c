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
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
