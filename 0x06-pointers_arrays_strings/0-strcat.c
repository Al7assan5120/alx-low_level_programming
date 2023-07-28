#include "main.h"
/**
*_strcat - concatenates two strings.
*@dest: char pointer
*@src: char pointer
*Return: string
**/
char *_strcat(char *dest, char *src)
{
	int ldest, i;

	for (ldest = 0; dest[ldest] != '\0' ; ldest++)
	{}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[ldest + i] = src[i];
	}
	dest[ldest + i + 1] = '\0';
return (dest);
}
