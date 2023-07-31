#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t type
 *
 * @h: address of new node
 * @n: integer input
 * Return: address of new new element.
 * NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!(*head))
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (*head);
}
