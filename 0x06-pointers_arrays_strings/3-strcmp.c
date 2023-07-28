#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: char pointer
*@s2: char pointer
*@n: int var
*Return: int value
**/
int _strcmp(char *s1, char *s2)
{
	int i;

while ((s1[i] - s2[i]) == 0 && s1[i] != '\0')
{
    i++;
}
return (s1[i] - s2[i]);
}
