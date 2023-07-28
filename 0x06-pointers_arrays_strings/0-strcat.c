#include "main.h"
/**
*_strcat - concatenates two strings.
*@dest: char pointer
*@src: char pointer
*Return: string
**/
char *_strcat(char *dest, char *src)
{
	int ldest, lsrc, i;

	ldest = 6;
	lsrc = 7;

for (i = 0; i < lsrc; i++)
{
	dest[ldest + i] = src[i];
}
return (dest);
}
