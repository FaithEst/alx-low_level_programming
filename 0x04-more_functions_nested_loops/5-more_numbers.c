#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: void
 */
void more_numbers(void)
{
int count, num;
count = 0;
while (count < 10)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
count++;
}
}
