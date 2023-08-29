#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end.
 * @head: pointer to the head of node
 * @n: data to add
 * Return: adderss of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p1 = malloc(sizeof(listint_t));
	listint_t *p2;

	p2 = *head;
	if (p1 == NULL)
	{
		free(p1);
		return (NULL);
	}
	else
	{
		p1->n = n;
		p1->next = NULL;
		if (p2 != NULL)
		{
			while (p2->next != NULL)
			{
				p2 = p2->next;
			}
			p2->next = p1;
		}
		else
		{
			*head = p1;
			p2 = p1;
		}
	}
	return (p1);
}
