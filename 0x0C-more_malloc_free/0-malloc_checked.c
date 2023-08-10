#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - that allocates memory using malloc.
 * @b: the int value of allocated length
 *
 * Return: no return.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
