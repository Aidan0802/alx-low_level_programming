#include "lists.h"

/**
 * print_dlistint - Counts and prints elements of list
 * @h: Address of the node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	if (h == NULL)
		return (count);

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
