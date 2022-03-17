#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line.
 */
void main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{printf("FizzBuzz\n"); }
else if (num % 3 == 0)
{printf("Fizz\n"); }
else if (num % 5 == 0)
{printf("Buzz\n"); }
}
}
