#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 1; i <= argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
