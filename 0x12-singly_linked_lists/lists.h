#include <stdio.h>
#ifndef LISTS_H
#define LISTS_H

typedef struct lists
{
	char * str;
	int len;
	struct lists *next;
}list_t;


int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
