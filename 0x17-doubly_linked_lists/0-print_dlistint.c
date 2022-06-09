#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head
 * return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t countNodes = 0;

	ptr = h;
	if (!h)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		countNodes++;
	}
	return (countNodes);
}
