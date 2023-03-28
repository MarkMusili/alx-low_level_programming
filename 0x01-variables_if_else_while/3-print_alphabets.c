#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++) 
		putchar(letters);
	for (letters = 'A' ; letters <= 'Z' ; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
