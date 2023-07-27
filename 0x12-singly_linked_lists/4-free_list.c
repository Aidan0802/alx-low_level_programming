#include "lists.h"

/**
 * free_list - frees a list_t
 *
 * @head: memory to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	
	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
