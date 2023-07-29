#include "main.h"
/**
*string_toupper - reverses the content of an array of integers.
*@a: char pointer
*Return: char pointer
**/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
