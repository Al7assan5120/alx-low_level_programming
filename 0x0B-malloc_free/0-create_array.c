#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: the size
 * @c: the char
 *
 * Return: char pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(size * sizeof(char));
	if (p == NULL)
	{
		p = NULL;
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
