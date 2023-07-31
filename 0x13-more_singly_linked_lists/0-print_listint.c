#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h: address that points to first node
 * Return: The number of list.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
