#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the source string
 * @accept: the string to compare
 *
 * Return: char pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	for (p = s; s[i] != '\0' ; p++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*p == accept[j])
			{
				return (p);
			}
		}
		i++;
	}
	return (p);
}
