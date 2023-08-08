#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  which contains a copy of the string given as a parameter.
 * @str: the size
 *
 * Return: char pointer.
 */
char *_strdup(char *str)
{
	int i, l = strlen(str);
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (char *)malloc((l + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
		exit(1);
	}
	for (i = 0; i <= l; i++)
	{
		p[i] = str[i];
	}
return (p);
free(p);
p = NULL;
}
