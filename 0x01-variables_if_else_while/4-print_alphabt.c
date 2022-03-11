#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets = 'a';
while (alphabets < 'z')
{
if (alphabets != 'q' && alphabets != 'e')
{
putchar(alphabets);
}
alphabets++;
}
putchar('\n');
return (0);
}
