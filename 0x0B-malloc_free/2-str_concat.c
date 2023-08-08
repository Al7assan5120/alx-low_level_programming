#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  that concatenates two strings.
 * @s1: the string 1
 *@s2: the string 2
 * Return: char pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1 = strlen(s1), l2 = strlen(s2);
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	p = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
		exit(1);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		p[i + j] = s2[j];
	}
return (p);
}
