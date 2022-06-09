#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head
 * return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int countNodes = 0;
	struct dlistint_t *ptr;
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->n);
		countNodes++;
		ptr = ptr->next;
	}
	return (countNodes);
}
