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

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
}
