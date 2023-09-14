#include "lists.h"

/**
 * dlistint_len - Counts number of elements of list
 * @h: Address of the node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
