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
	dlistint_t *ptr;
	dlistint_t *new;
	ptr = *head;

	if (!ptr)
		return (NULL);
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(dlistint_t));
		ptr->n = n;
		ptr->prev = NULL;
		ptr->next = NULL;
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
        	if (new == NULL)
                	return (NULL);
        	new->n = n;
        	new->prev = NULL;
        	new->next = ptr;
		ptr->prev = new;
		ptr = new;
	}
	return (ptr);
}
