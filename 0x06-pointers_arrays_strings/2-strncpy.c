#include "main.h"
/**
*_strncpy - copies a string.
*@dest: char pointer
*@src: char pointer
*@n: int var
*Return: string
**/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; src[j] != '\0' ; j++)
	{}
	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
return (dest);
}
