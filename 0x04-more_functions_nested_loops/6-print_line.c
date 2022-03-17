#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n checks the integer
 * Return: void
 */
void print_line(int n)
{
int i;
if (n <= 0)
{_putchar('\n'); }
for (i = 1; i <= n; i++)
{_putchar('_'); }
_putchar('\n');
}
