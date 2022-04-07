#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: source
 * @s2: destination
 * @n: number of bytes
 * 
 * Return - to newly allocated space, if FAILURE null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1;
int len2;
char *ptr;

for (len1 = 0; s1[len1] && s1; len1++){}
for (len2 = 0; s2[len2] && s2; len2++){}
// for (n = 0; s2[n] && s2; n++)
// {
//     if (s2[n] == NULL)
//     {
//     s2[n] = " ";
//     }
// }
if (n < len2)
{
	ptr = malloc(sizeof(char) * (len1 + n + 1));
}
else
{
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
}

if (ptr == NULL)
{
	return (NULL);
}
int i = 0;
int j = 0;

if (s1)
{
    while (i < len1)
    {
        ptr[i] = s1[i];
        i++;
    }
}
if (s2)
{
    while (n < len2 && i < len1 + n)
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    while (n >= len2 && i < (len1 + len2))
    {
		ptr[i] = s2[j];
		i++;
		j++;
    }
}
ptr[i] = '\0';
return (ptr);
}
