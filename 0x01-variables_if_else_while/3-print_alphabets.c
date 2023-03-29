#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

<<<<<<< HEAD
	for (letters = 'a' ; letters <= 'z' ; letters++) 
=======
	for (letters = 'a' ; letters <= 'z' ; letters++)
>>>>>>> 7e61cedeced816efeedbae744695fe2e81a928f3
		putchar(letters);
	for (letters = 'A' ; letters <= 'Z' ; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
