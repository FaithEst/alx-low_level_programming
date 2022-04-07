#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to calculate
 * Return pointer if SUCCESSFUL, 98 if FAILURE
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);

	if (b <= 0)
		return (NULL);
	if (p == NULL)
		return (98);
	return (p);
}
