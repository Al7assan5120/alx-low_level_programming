#include "main.h"
/**
 * prime_num - returns 1 if the input integer is a prime number.
 * @n: the int number
 * @x: the int number
 * Return: int value = 1 if prime number.
 */
int prime_num(int n, int x)
{
	if (((n % x) != 0))
	{
		return (prime_num(n, x + 1));
	}
	if (x == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: the int number
 *
 * Return: int value = 1 if prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num(n, 2));
}
