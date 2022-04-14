#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(list, char *);
		if (!word)
			word = "(nil)";
		if (!separator)
			printf("%s", word);
		else if (separator && i == 0)
			printf("%s", word);
		else
			printf("%s%s", separator, word);
	}
	va_end(list);

	printf("\n");
}
