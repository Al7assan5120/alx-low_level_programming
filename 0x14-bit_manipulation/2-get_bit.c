#include "main.h"
#include <stdio.h>

/**
*get_bit - returns the value of a bit at a given index.
*@n: the num to be print as a binary
*@index: the index to read the bit
*Return: the value of a bit
**/

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n || index > 63)
	{
		return (-1);
	}
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
