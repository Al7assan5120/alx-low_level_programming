#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of node
 * Return: coun.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int coun = 0;

ptr = h;
	if (ptr == NULL)
	{
		return (coun);
	}
	else
	{
		while (ptr != NULL)
		{
			coun++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}
	return (coun);
}
