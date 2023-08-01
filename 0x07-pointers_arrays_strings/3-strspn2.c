#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the source string
 * @accept: the string to compare
 *
 * Return: int of length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0, l = 0;
	char *p;

	for (p = accept ; accept[j] != '\0'; p++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (*p == s[i])
			{
				l++;
				break;
			}
		}
		j++;
	}
return (l + 1);
}
