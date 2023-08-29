#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list.
 * @h: pointer to the head of node
 * Return: coun.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int coun = 0;

ptr = h;
	if (ptr == NULL)
	{
		ptr = NULL;
		return (coun);
	}
	else
	{
		while (ptr != NULL)
		{
			coun++;
			ptr = ptr->next;
		}
	}
	return (coun);
}
