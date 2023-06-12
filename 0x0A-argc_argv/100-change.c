#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry points of the code
 * @argc: number of command line agruments
 * @argv: array storing the command line arguments
 * Return: 0 for success or if a negative number is passed
 * or 1 if there is no argument passed
 */
int main(int argc, char *argv[])
{
	int i, cents, num, coins[] = {25, 10, 5, 2, 1};
	int currentcoins = 0, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num = sizeof(coins) / sizeof(coins[0]);
	for (i = 0; i < num; i++)
	{
		currentcoins = cents / coins[i];
		total += currentcoins;
		cents %= coins[i];
	}
	printf("%d\n", total);
	return (0);
}
