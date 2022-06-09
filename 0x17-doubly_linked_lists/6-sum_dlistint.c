#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: head pointernto the list
 *
 * Return: sum of all integers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next
	}
	return (sum);
}

