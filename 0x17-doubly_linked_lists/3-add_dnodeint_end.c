#include "lists.h"

/**
 * add_dnodeint_end - Adds at the end of node list
 * @head: Address of beginning of node
 * @n: Number to be added
 * Return: New list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (add_end == NULL)
		return (NULL);
	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
	{
		add_end->prev = NULL;
		*head = add_end;
	}

	while (current->next)
		current = current->next;

	current->next = add_end;
	add_end->prev = current;

	return (add_end);
}
