#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node.
 * @head: pointer to the head of node
 * Return: the data in head node.
 */

int pop_listint(listint_t **head)
{
	int d;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	d = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	ptr = *head;
	return (d);
}
