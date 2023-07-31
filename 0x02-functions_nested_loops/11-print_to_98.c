#include "main.h"
/**
*add - adds two integers and returns the result.
*@x: int number
*@y: int number
*Return: return sum.
**/
void print_to_98(int n)
{
	int i, j;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= 9)
			{
				if (i < 0)
				{
					_putchar('-');
					_putchar((i * -1 ) + '0');
					if (i == 98)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(i + '0');
					if (i == 98)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{

				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i == 98)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			_putchar(j / 100 + '0');
			_putchar((j / 10) % 10 + '0');
			_putchar(j % 10 + '0');
			if (j == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
