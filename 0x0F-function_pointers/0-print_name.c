#include "function_pointers"

/**
 * print_name - prints a name
 * @name: string name argument to print
 * @f: pointer to function
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

