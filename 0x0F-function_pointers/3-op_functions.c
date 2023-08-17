#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - fun to add
 * @a: int value
 * @b: int value
 * Return: the result of adding
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fun to subtraction
 * @a: int value
 * @b: int value
 * Return: the result of subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fun to multiplication
 * @a: int value
 * @b: int value
 * Return: the result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fun to division
 * @a: int value
 * @b: int value
 * Return: the result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: given integar
 * @b: given integar
 * Return: result of modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
