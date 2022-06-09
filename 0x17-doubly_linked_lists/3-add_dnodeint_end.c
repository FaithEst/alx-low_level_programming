#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to list
 * @n: integer value for the nodes
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	ptr = *head;
	while (ptr && ptr->next)
		ptr = ptr->next;

	if (ptr)
	{
		new->prev = ptr;
		ptr->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
