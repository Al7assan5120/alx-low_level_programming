#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data of list.
 * @head: pointer to the head of node
 * Return: no return.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
