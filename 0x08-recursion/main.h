#ifndef MAIN_H
#define MAIN_H

/**
 * Headers
 */
#include <stddef.h>
#include <string.h>

/**
 * Prototypes
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int prime_checker(int i, int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int check_palindrome(char *s, int start, int end);

#endif
