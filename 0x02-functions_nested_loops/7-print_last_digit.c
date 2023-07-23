#include "main.h"
/**
*print_last_digit - prints the last digit of a number.
*@n: int number
*Return: return num.
**/
int print_last_digit(int n)
{
	int num;

	num = (n % 10);
	if (n < 0)
	{
		_putchar(-num + 48);
		return (-num);
	}
	else
	{
		_putchar(num + 48);
		return (num);
	}
}
