/*
 * File: 7-print_diagonal.c
 * Auth: Brennan D Baraban
 */
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: checks he number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{_putchar('\n'); }
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{putchar(' '); }
_putchar('\\');
if (i == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');   
}
