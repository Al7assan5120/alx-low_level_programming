#include "main.h"
/**
*print_alphabet_x10 - print alphabet, in lowercasex10.
*Return: no return
**/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
