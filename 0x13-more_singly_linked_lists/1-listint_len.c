#include "lists.h"

/**
 * listint_len - returns number of elements in link
 *
 * @h: address of first node
 * Return: Number of elements otherwise NULL
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
