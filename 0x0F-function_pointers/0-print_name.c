#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string name argument to print
 * @f: pointer to function
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
