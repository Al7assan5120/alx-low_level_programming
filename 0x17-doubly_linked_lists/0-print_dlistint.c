#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *@h: pointer to the list
 * Return: number of element.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
