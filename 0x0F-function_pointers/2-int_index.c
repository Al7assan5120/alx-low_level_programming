#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - searches for an integer..
 * @array: array name
 * @size: array size
 * @cmp: pointer to a func.
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x = 0;
	int index = 0;

	if (size <= 0)
	{
		index = -1;
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x == 0)
		{
			index = -1;
		}
		else
		{
			index = i;
			break;
		}
	}
return (index);
}
