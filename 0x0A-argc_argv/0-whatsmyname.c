#include <stdio.h>
/**
 * main - Prints the program name
 * @argc: Number of arguments
 * @argv: Pointer to an array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s \n", *argv);
	return (0);
}
