#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: exponent
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Get the modulus of the two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: Modulus of the two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
