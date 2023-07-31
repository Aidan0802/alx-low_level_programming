#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 *
 * @idx: index position
 * @n: new node input
 * Return: address of new node Otherwise NUll if FAIL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *insert = *head;
	unsigned int index = 0;

	if (!(*head))
		return (NULL);
	
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	while (insert)
	{
		if (index == (idx - 1))
			break;
		insert = insert->next;
		index++;
	}
	
	newNode->n = n;
	newNode->next = insert->next;
	insert->next = newNode;

	return (*head);
}
