#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count = 0;

	c = h;
	while (c != NULL)
	{
		count++;
		c = c->next;
	}
	return (count);
}
