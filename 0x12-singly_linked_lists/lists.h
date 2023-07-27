#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - list structure
 *
 * @str: string
 * @i: integer
 * @ptr: address
 */
typedef struct list list_t;

struct list 
{
	char *str;
	int len;
	list_t *next;
};


int _putchar(int);
size_t print_list(const list_t *h);

#endif
