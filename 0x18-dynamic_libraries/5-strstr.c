#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the source string
 * @accept: the string to compare
 *
 * Return: char pointer.
 */
char *_strstr(char *haystack, char *needle) /*hello,world -- world*/
{
	int i , j = 0;
	char *p = needle;
	char *p2;

	for (p = needle; needle[j] != '\0'; p++)
	{
	    for (i = 0; haystack[i] != '\0' ; i++)
	    {
			if (*p == haystack[i])
			{
				p2 = &haystack[i];
				return (p2);
			}
		}
		j++;
	}
	return (NULL);
}
