#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * 
 * Return pointer to the allocated memory, 98 if FAILURE
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}         
return (p);
}
