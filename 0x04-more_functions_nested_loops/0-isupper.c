#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{return (1); }
else if (c >= 'a' && c <= 'z')
{return (0); }
}
