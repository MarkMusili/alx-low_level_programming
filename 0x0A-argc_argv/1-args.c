#include <stdio.h>
#include "main.h"
/**
 * main - Prints number of arguments passed.
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
