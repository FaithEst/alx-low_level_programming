#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
return (0);
}
