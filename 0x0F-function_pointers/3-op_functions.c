#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Subtraction of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: quotient of the two numbers
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get the modulus of two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: reminder of the two numbers
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
