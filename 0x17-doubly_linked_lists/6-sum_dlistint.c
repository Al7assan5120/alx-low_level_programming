#include "lists.h"

/**
 * sum_dlistint - frees a dlistint_t list.
 *@head: pointer to the list
 * Return: no return.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	if (p == NULL)
		return (0);
	sum = p->n;
	while (p->next != NULL)
	{
		p = p->next;
		sum += p->n;
	}
	return (sum);
}
