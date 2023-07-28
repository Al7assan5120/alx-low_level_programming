#include "main.h"
#include"2-strlen.c"
/**
*rev_string - reverses a string.
*@s: char pointer
*Return: no return
**/
void rev_string(char *s)
{
	int i ,j;
    int l;
    l = _strlen(s);
    char* rev;

    for (i = 0; i < l ; i++)
	{
		rev[l-(i+1)] = s[i];
	}
	for (j = 0; j < l ; j++)
	{
		s[j] = rev[j];
	}
}
