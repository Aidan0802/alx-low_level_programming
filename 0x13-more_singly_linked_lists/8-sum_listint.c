#include "lists.h"

/**
 * sum_listint - calculates sum of link data (n)
 * of listint_t linked list
 *
 * @head: node address
 * Return: Sum otherwhise 0 list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
