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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (dest[i] == '\n')
		{
			dest[i + 1] = '\0';
		}
	}
return (dest);
}
