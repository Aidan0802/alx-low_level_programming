#include "lists.h"

/**
 * add_dnodeint - Add node at begining of list
 * @head: Address of first node
 * @n: Number to be added
 * Return: New list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = *head;
	added->prev = NULL;

	if (*head != NULL)
		(*head)->prev = added;
	*head = added;
	return (added);
}
