#include "main.h"
/**
*print_square - prints a square, followed by a new line
*@size: int number
*Return: no return
**/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
_putchar('\n');
}
