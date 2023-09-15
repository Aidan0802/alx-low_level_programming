#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at given index
 * @head: Address of head
 * @index: Index to be deleted
 * Return: 1 (Success), -1 (Fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count != index - 1)
	{
		current = current->next;
		count++;
	}

	if (!current)
		return (-1);

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	free(current);
	return (1);
}
