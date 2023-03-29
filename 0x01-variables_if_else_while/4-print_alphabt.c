#include <stdio.h>
/**
 * main - Prints all the letters of the alphabet except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
		if (letters == 'e' || letters == 'q')
			continue;
	putchar(letters);
	}
	putchar('\n');
	return (0);
}
