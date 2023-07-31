#include "lists.h"

/**
 * get_nodeint_at_index - searches for the nth node
 *
 * @head: node address
 * @index: index of the node
 * Return: nth node of a link. NULL if it's not there
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *select = head;

	while (select)
	{
		if (i == index)
			return (select);
		select = select->next;
		i++;
	}

	return (NULL);
}
