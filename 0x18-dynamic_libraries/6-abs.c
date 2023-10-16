#include "main.h"
/**
*_abs - computes the absolute value of an integer.
*@r: int number
*Return: always return 0.
**/
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	{
		return (r);
	}
}
