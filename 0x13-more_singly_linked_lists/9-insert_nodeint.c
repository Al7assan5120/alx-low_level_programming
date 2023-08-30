#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of node
 * @idx: index to insert data
 * @n: index data
 * Return: coun.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *front, *back;
	listint_t *temp = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	front = (*head)->next;
	back = *head;
	for (i = 1; i < idx; i++)
	{
		if (front == NULL)
		{
			return (NULL);
		}
		else
		{
			front = front->next;
			back = back->next;
		}
	}
	back->next = temp;
	temp->next = front;
	return (temp);
}
