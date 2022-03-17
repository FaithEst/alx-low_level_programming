#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{printf("FizzBuzz"); }
else if (num % 3 == 0)
{printf("Fizz"); }
else if (num % 5 == 0)
{printf("Buzz"); }
else
{printf("%d", num); }
}
printf("\n");
return (0);
}
