#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of node
 * Return: coun.
 */

int print_list(const list_t *h)
{
	int coun = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			coun++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			coun++;
			h = h->next;
		}
	}
	return (coun);
}
