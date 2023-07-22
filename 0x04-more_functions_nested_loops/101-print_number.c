#include "main.h"
#include <stdlib.h>
/**
*print_number - prints an integer.
*@n: int number
*Return: no return
**/
void print_number(int n)
{
	if (n >= 1000)
	{
	_putchar(n / 1000 + '0');
	_putchar(n / 100 % 10 + '0');
	_putchar(n / 10 % 10 + '0');
	_putchar(n % 10 + '0');
	}
	else if (n < 1000 && n >= 100)
	{
	_putchar(n / 100 % 10 + '0');
	_putchar(n / 10 % 10 + '0');
	_putchar(n % 10 + '0');
	}
	else if (n < 100 && n >= 10)
	{
	_putchar(n / 10 % 10 + '0');
	_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
	n = abs(n);
	_putchar('-');
	_putchar(n / 10 % 10 + '0');
	_putchar(n % 10 + '0');
	}
	else
	{
	_putchar(n % 10 + '0');
	}
}
