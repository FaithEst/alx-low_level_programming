#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the first node
 * @n: data to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	temp = *head;

	if (new == NULL)
		return (NULL);

	*head = new;

	if (temp == NULL)
		new->next = NULL;
	else
		new->next = *head;

	return (new);
}
