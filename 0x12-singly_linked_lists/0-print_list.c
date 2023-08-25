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
	const list_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		printf("[0] (nil)");
	}
	while (ptr != NULL)
	{
		coun++;
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (coun);
}
