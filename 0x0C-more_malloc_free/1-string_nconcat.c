#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat -  that concatenates two strings.
 * @s1: the string 1
 *@s2: the string 2
 *@n: the the num. of byte of s2 to concat.
 * Return: char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		p = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	else
		p = (char *)malloc((l1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (n >= l2)
	{
		for (i = 0; i < l1; i++)
			p[i] = s1[i];
		for (j = 0; j <= l2; j++)
			p[i + j] = s2[j];
	}
	else
	{
		for (i = 0; i < l1; i++)
			p[i] = s1[i];
		for (j = 0; j <= n; j++)
			p[i + j] = s2[j];
	}
return (p);
}
