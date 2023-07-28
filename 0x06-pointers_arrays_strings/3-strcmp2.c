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
	int *p1, *p2;

	for (p1 = s1; *p1 != '\0'; p1++)
	{
		for (p2 = s2; *p2 != '\0'; p2++)
		{
			if (*p1 != *p2)
			{
				return (*p1 - *p2);
			}
			else
			{
				return (0);
			}
		}
	}
}
