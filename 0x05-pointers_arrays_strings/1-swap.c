#include "main.h"


/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to 1st value
 * @b: pointer to 2nd value
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
