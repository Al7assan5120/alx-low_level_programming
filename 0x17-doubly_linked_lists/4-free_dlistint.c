#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *@head: pointer to the list
 * Return: no return.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
	p = NULL;
}
