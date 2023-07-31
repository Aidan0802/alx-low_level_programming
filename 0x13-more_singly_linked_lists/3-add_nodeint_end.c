#include "lists.h"

/**
 * add_nodeint_end - add node at end of listint_t type
 *
 * @head: address of new node
 * Return: address of new element. NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *nodePtr;

	nodePtr = malloc(sizeof(listint_t));
	if (!nodePtr)
		return (NULL);

	nodePtr->n = n;

	if (!(*head))
		*head = nodePtr;
	else
	{
		lastNode = *head;
		while (lastNode->next)
			lastNode = lastNode->next;
		
		lastNode->next = nodePtr;
	}
	return (lastNode);
}
