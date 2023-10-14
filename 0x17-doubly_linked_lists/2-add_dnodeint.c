#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: pointer to the list
 *@n: data
 * Return: head pointer.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

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
		ptr->next = *head;
		(*head)->prev = ptr;
		*head = ptr;
	}
	return (ptr);
}
