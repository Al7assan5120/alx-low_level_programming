#include "main.h"
#include <stdio.h>

/**
*clear_bit - sets the value of a bit to 0 at a given index.
*@n: the num to be print as a binary
*@index: the index to set the bit
*Return: the value of a bit
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (*n & (~(1 << index)));
	return (1);
}
