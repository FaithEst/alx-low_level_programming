#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning
 * of a dlistint_t list
 * @head: double pointer to list
 * @n: integer value to add to list
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head)
		new->next = NULL;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
