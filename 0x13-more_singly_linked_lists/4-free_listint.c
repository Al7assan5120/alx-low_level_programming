#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - adds a new node at the end.
 * @head: pointer to the head of node
 * Return: adderss of new node.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
