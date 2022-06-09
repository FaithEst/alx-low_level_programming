#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list
 * @h: head pointer to the 1st node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	if (!ptr)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->n;
	}
	return (count);
}
