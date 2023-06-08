#include "main.h"
/**
 * prime_checker  - Check for a prime number
 * @i: divisor to confirm whether n is a prime number
 * @n: number to be checked
 * Return: 1 if n is a prime number otherwise 0
 */
int prime_checker(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i == n)
		return (1);
	else if (i % n == 0)
		return (0);
	else
		return (prime_checker(i + 1, n));
}
/**
 * is_prime_number - Checks for a prime number
 * @n: number to be checked
 * Return: 1 if n is a prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime_checker(2, n));
}
