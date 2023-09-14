#include "lists.h"

/**
 * free_dlistint - Free's memory
 * @head: Address of head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	if (head)
	{
		while (current)
		{
			next = current->next;
			free(current);
			current = next;
		}
		head = NULL;
	}
}
