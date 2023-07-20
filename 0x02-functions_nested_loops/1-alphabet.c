#include "main.h"
#include <stdio.h>
/**
*main - print alphabet, in lowercase
*Return: always return 0
**/
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
