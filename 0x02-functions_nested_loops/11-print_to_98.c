/*
 * File: 11-print_to_98.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * print_to_98  -  prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: checks the number
 * Return: void
 */
void print_to_98(int n)
{
while (n <= 0 && n <= 98)
{
    _putchar(n);
    _putchar(',');
    _putchar(' ');
}
n++;
while (n >= 0 && n <= 98)
{
    _putchar(n);
    _putchar(',');
    _putchar(' ');
}
n++;
while (n >= 98)
{
    _putchar(n);
    _putchar(',');
    _putchar(' ');
}
n--;
}
