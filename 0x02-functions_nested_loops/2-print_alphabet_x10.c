/*
 * File: 2-print_alphabet_x10.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * void print_alphabet_x10(void)  - prints the alphabet 10 times
 * in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int count = 48;
while (count < 58)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
return;
}
