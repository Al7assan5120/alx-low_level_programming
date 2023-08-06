#include "main.h"
/**
 * _sqrt - returns the value of x raised to the power of y.
 * @n: the int number
 * @x: the int number
 * Return: int value of power.
 */
int _sqrt(int n, int x)
{
	if (n == 1)
	{
		return (x);
	}
	if (x >= n / 2)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (_sqrt(n, x + 1));
	}
}

/**
 * _sqrt_recursion - returns the value of x raised to the power of y.
 * @n: the int number
 *
 * Return: int value of power.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
