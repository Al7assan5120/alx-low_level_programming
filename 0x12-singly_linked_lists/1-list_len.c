#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: pointer to the head of node
 * Return: coun.
 */

size_t list_len(const list_t *h)
{
int coun = 0;

	while (h != NULL)
	{
		coun++;
		h = h->next;
	}
	return (coun);
}
