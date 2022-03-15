/*
 * File: 5-sign.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * print_sign  - prints the sign of a number
 * @n: checks the number
 * Return: 1 if character is lowercase,uppercase or a letter
 * 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
