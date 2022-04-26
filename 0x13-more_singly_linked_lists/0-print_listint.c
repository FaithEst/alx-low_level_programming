#include "lists.h"

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t count = 0;

	c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		count++;
		c = c->next;
	}

	return (count);
}
