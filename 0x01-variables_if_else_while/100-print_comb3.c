#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different
 * combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int num, num2;

for (num = 48; num <= 56; num++)
{
for (num2 = 49; num2 <= 57; num2++)
{
if (num2 > num)
{
putchar(num);
putchar(num2);
if (num != 56 || num2 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
