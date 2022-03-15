/*
 * File: 7-print_last_digit.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * print_last_digit  -  prints the last digit of a number
 * @n: checks the number
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
{n = -n; }

a = n % 10;

if (a < 0)
{a = -a; }

_putchar(a + '0');

return (a);
}
