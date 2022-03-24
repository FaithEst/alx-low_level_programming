#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
    int len, len2 = 0, finalDest = 0;
    
    // length for destination string
    while (dest[len2] != '\0')
    {
        len2++;
    }
    // lenght after removing the null byte
    finalDest = len2 - 1;
     
    for (len = 0; src[len] != '\0'; len++)
    {
         dest[finalDest] = src[len];
         finalDest++;
    }
    dest[finalDest] = '\0';
    return (dest);
}
