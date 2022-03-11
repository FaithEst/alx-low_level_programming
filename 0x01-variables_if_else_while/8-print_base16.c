#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
int numbers;
char alphabets;

for (numbers = 48; numbers < 58; numbers++)
{
putchar(numbers);
}
for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
