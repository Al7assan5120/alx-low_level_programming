#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end.
 *@head: pointer to the list
 *@n: data
 * Return: head pointer.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *p = NULL;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = ptr;
		ptr->prev = p;
	}
	return (ptr);
}
