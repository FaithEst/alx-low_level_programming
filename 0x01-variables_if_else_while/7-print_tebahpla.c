#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase in reverse,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets;
for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
