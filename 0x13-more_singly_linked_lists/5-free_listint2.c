#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head of node
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *p2;

if (*head == NULL)
{
	ptr = NULL;
	p2 = NULL;
	return;
}
else
{
	ptr = *head;
	p2 = *head;
	while (ptr != NULL)
	{
		p2 = p2->next;
		free(ptr);
		ptr = p2;
	}
	*head = p2;
}
}
