#include <stdio.h>
/**
 * main - Print the name of file it was compiled from.
 * Return: 0 for success of the program.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
