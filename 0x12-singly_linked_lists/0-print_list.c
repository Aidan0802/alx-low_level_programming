#include "lists.h"

/**
 * print_list - prints a list;
 *
 * @h: pointer to list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *cur = h;
	int i = 0;

	while (cur != NULL)
	{
		printf("[%i] %s\n", h->len, cur->str);
		cur = cur->next;
		i++;
	}
	return (i);
}
