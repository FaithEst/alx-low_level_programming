#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: void
 */
void more_numbers(void)
{
int count = 0;
while (count < 10)
{
    for (int num = 0; num <= 14; num++)
    {
        _putchar(num);
    }
    _putchar('\n');
    count++;
}
}