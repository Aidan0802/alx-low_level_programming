#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 *
 * @head: node address
 * @idx: index position
 * @n: new node input
 * Return: address of new node Otherwise NUll if FAIL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *insert = *head;
	listint_t *temp = *head;
	unsigned int index = 0, len = 0;

	if (!(head) && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = insert;
		*head = newNode;
	}
	else
	{
		while (temp)
		{
			len++;
			temp = temp->next;
		}

		while (insert)
		{
			if (index == (idx - 1))
				break;
			insert = insert->next;
			index++;
		}
		if (idx > len)
			return (NULL);

		newNode->next = insert->next;
		insert->next = newNode;
	}
	return (newNode);
}
