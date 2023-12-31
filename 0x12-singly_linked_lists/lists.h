#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - list structure
 *
 * @str: string
 * @len: lenght
 * @next: pointing to next node
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;

} list_t;

int _putchar(int);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) before_main(void);

#endif
