#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning.
 * @head: pointer to the head of node
 * @n: data to add
 * Return: coun.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->n = n;
		ptr->next = NULL;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
