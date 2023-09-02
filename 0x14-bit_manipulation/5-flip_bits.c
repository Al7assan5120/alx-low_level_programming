#include "main.h"
#include <stdio.h>

/**
*flip_bits - returns the number of bits you would need to flip
*@n: the num to be print as a binary
*@m: the index to set the bit
*Return: the value of a bit
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long i;
	unsigned int coun = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & (1 << i)) != (m & (1 << i)))
		{
			coun++;
		}
	}
	return (coun / 2);
}
