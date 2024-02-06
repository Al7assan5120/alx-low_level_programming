#include "search_algos.h"

/**
*linear_search - fun. using Linear search algorithm.
*@array: pointer to the array.
*@size: the size of the array
*@value: is the value to search for
*Return: no return
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
		array++;
	}
	return (-1);
}
