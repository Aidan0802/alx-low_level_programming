#include "lists.h"

/**
 * add_node - adds new node at the beginning
 *
 * @head: pointing to the beginning
 * @str: new string to add
 *
 * Return: address of new element or
 * NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *current = malloc(sizeof(list_t));

	if (!current)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	current->len = i;
	current->str = strdup(str);

	if (!(*head))
	{
		*head = current;
		current->next = NULL;
	}
	else
	{
		current->next = *head;
		*head = current;
	}
	return (*head);
}
