#include "main.h"
/**
 * sqrt - returns the value of x raised to the power of y.
 * @n: the int number
 * @n: the int number
 * Return: int value of power.
 */
int sqrt(int n, int x)
{
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
        if (x * x != n)
		{
            _sqrt_recursion(n, x + 1);
        }
	}
    return (x);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @n: the int number
 *
 * Return: int value of power.
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
