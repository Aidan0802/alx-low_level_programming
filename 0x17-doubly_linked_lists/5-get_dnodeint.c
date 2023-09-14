#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node
 * @head: Address of the 1st node
 * @index: The nth node of the list
 * Return: The nth node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
