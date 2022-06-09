#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: head pointernto the list
 *
 * Return: 0 if empty, otherwise return sum
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *ptr;
	int sum = 0;

	ptr = head;

	if (!head)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next
	}
	return (sum);
}
