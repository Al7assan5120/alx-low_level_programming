#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @n: the int number
 *
 * Return: int value of power.
 */
int _sqrt_recursion(int n)
{
    int x = n;
	if (x == 0)
	{
		return (1);
	}
	else if (x < 0)
	{
		return (-1);
	}
	else
	{
        if (x * x == n)
        {
            x++;
            _sqrt_recursion(n - 1);
        }
	}
    return (x);
}
