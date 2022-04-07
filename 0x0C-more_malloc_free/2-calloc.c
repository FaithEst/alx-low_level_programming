#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element member
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
{
    return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
    return (NULL);
}

return (p);

}