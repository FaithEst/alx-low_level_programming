#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers;
for (numbers = 48; numbers < 58; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);
}
