#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the integer to be checked
 * Return: factorial.
 */
int factorial(int n)
{
if (n <= 0)
{
return (1);
}
return (n * factorial(n - 1));
}
