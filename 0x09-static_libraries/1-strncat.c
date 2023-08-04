#include "main.h"
/**
*_strncat - concatenates two strings.
*@dest: char pointer
*@src: char pointer
*@n: int var
*Return: string
**/
char *_strncat(char *dest, char *src, int n)
{
	int ldest, i;

	for (ldest = 0; dest[ldest] != '\0' ; ldest++)
	{}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[ldest + i] = src[i];
	}
	dest[ldest + i + 1] = '\0';
return (dest);
}
