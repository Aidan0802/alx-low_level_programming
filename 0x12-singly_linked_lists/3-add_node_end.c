#include "lists.h"

/**
 * add_node_end - adds noe at the end
 *
 * @head: head pointer of single link
 * @str: string input
 *
 * Return: address on success otherwise
 * NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *lastN;
	list_t *nodePtr = malloc(sizeof(list_t));

	if (nodePtr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	
	nodePtr->str = strdup(str);
	nodePtr->len = i;
	
	if (!(*head))
		*head = nodePtr;
	else
	{
		lastN = *head;
		while (lastN->next)
			lastN = lastN->next;
		lastN->next = nodePtr;
	}
	return (lastN);
}
