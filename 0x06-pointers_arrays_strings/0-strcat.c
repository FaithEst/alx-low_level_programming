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
    int len = 0, finalDest = 0, i;
    
    while (dest[len] != '\0')
    {
        len++;
    }
    finalDest = len - 1;
     
    for (i = 0; src[i] != '\0'; i++)
    {
         dest[finalDest] = src[i];
         finalDest++;
    }
    dest[finalDest] = '\0';
    return (dest);
}
