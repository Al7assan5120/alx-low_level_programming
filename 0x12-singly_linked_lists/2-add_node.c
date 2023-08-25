#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - returns the number of elements in a linked list_t list.
 * @head: pointer of node
 * @str: string in node
 * Return: coun.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *p;

	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->len = i;
	p->next = *head;
	*head = p;
	return (p);
}
