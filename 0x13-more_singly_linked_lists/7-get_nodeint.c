#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of node
 * @index: index to print data
 * Return: coun.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (ptr);
}
