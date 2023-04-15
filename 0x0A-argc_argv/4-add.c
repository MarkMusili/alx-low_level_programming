#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: number of arguments
 * @argv: array containing th e arguments
 * Return: sum of the two numbers
 */
int main(int argc, char *argv[])
{
	unsigned int x, y, result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (x == 0 && argv[1][0] != '0')
	{
		printf("Error\n");
		return (1);
	}
	if (y == 0 && argv[2][0] != '0')
	{
		printf("Error\n");
		return (1);
	}
	result = x + y;
	printf("%u\n", result);
	return (0);
}
