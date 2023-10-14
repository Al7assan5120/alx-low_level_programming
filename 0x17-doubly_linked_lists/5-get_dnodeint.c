#include "lists.h"

/**
 * get_dnodeint_at_index - adds a new node at the end.
 *@head: pointer to the list
 *@index: data
 * Return: head pointer.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;

	while (index != 0)
	{
		if (p->next == NULL)
			return (NULL);
		p = p->next;
		index--;
	}
	return (p);
}
