#include "main.h"
#include"2-strlen.c"
/**
*print_rev - prints a string, in reverse.
*@s: char pointer
*Return: no return
**/
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
