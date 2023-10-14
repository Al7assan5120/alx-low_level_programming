#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *@h: pointer to the list
 * Return: number of element.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
