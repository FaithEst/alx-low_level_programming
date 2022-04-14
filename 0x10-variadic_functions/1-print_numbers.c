#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		count = va_arg(list, int);
		if (!separator)
			printf("%d", count);
		if (i == n - 1)
			printf("%d\n", count);
		else
			printf("%d%c \n", count, separator); 
	}
	va_end(list);

	printf("\n");
}
