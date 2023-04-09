#include <stdio.h>
#include "main.h"
/**
 * main - Print the product of two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 * Return: 0 (success,no error) -1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error \n");
		return (-1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	product = x * y;

	printf("%d \n", product);
	return (0);
}
