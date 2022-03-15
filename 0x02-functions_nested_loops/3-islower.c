/*
 * File: 3-islower.c
 * Auth: Brennan D Baraban
 *
 */
#include "main.h"

/**
 * _islower  - checks for lowercase character.
 * 
 * Return: Always 0.
 */
int _islower(int c)
{
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        if (alphabet)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
}
