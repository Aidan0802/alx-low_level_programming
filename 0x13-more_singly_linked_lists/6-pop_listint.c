#include "lists.h"

/**
 * pop_listint - deletes head node of type listint_t
 *
 * @head: node address
 * Return: returns the head node's data (n)
 * if emptym return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int n;

	del = *head;
	n = del->n;
	*head = (*head)->next;

	free(del);

	return (n);
}
