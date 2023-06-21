#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: function pointer with a char pointer as the argument
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
