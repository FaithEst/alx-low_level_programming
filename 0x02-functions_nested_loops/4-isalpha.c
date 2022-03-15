/*
 * File: 4-isalpha.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * _islower  - checks for alphabetic character.
 * @c: checks the character
 * Return: 1 if character is lowercase,uppercase or a letter
 * 0 otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
    return (1);
else if (c >= 'A' && c <= 'Z')
    return (1);
else
    return (0);
return (0);
}
