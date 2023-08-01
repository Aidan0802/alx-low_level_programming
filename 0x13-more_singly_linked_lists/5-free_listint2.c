#include "lists.h"

/**
 * free_listint2 - free listint_t list and set head
 * to NULL
 *
 * @head: node address
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	
	if (!head)
	{
		while (*head)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
		*head = NULL;
	}
}
