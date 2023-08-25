#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer of node
 * @str: string in node
 * Return: coun.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *p, *p2;

	while (str[i] != '\0')
	{
		i++;
	}
	p2 = malloc(sizeof(list_t));
	if (p2 == NULL)
	{
		return (NULL);
	}
	p2->str = strdup(str);
	p2->len = i;
    p2->next = NULL;
    if (*head == NULL)
    {
        p = *head;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
	p2 = p->next;
	return (p2);
}
