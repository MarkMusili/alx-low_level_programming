#include <stdio.h>
/**
 * main - Prints the program name
 * @argc: Number of arguments
 * @argv: Pointer to an array of arguments
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
