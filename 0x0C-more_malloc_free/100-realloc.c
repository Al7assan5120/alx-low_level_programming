#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer of odl alloc.
 * @old_size: alloc old size
 * @new_size: new size to alloc.
 * Return: no return.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *p;
	char *p2 = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
		free(ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = p2[i];
		}
	}
free(ptr);
return(p);
}
