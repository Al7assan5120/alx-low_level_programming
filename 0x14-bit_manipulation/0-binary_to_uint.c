#include "main.h"
#include <stdio.h>

/**
*binary_to_uint - converts a binary number to an unsigned int.
*@b: pointer of string for 0 or 1
*Return: the decimal num or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int x = 1;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		x *= 2;
		i++;
	}
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num += x * (b[i] - '0');
		x /= 2;
		i++;
	}
	return (num / 2);
}
