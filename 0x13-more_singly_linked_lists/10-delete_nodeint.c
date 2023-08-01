#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at position
 *
 * @head: address of node
 * @index: node to be deleted
 * Return: 1 if succeeded otherwise -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *selected = *head;
	listint_t *del;

	if (!(*head) || (!(*head) && index != 0))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(selected);
	}
	else
	{
		while (selected)
		{
			if (idx == index - 1)
				break;
			selected = selected->next;
			idx++;
		}

		del = selected->next;
		selected->next = del->next;
		free(del);
	}
	return (1);
}
