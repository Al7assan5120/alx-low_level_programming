#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program that performs simple operations.
 * @argc: the num. of argum.
 * @argv: the array of argum.
 * Return: 0 if true, something else otherwise.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
result = (*operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
