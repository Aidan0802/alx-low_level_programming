#include "lists.h"

/**
 * list_len - prints a list;
 *
 * @h: pointer to list
 *
 * Return: the number of list
 */

size_t list_len(const list_t *h)
{
	const list_t *cur = h;
	int i = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}
