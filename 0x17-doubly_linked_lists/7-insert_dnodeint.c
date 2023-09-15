#include "lists.h"

/**
 * inseret_dnodeint_at_index - Insert n at index
 * @h: Head node Address
 * @idx: Index
 * @n: Number to insert
 * Return: New Address, otherwise NULL if not possible
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_list = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;
	
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	if (idx == 0)
	{
		if (*h)
		{
			new_list->next = *h;
			(*h)->prev = new_list;
		}
		new_list->prev = NULL;
		*h = new_list;
		return (new_list);
	}

	while (current)
	{
		if (idx - 1 == count)
			break;
		current = current->next;
		count++;
	}

	if (current)
	{
		new_list->next = current->next;
		new_list->prev = current;
		if (current->next)
			current->next->prev = new_list;
		current->next = new_list;
		return (new_list);
	}

	return (NULL);
}

