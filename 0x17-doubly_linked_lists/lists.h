#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

typedef struct node
{
	int n;
	struct node *next;
	struct node *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif
