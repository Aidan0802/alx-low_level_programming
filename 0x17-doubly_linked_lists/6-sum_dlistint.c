#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of n in node list
 * @head: Address of first node
 * Return: The sum of n, otherwise 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
