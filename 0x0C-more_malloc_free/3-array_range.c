#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: alloc from min
 *@max: alloc from max
 *
 * Return: int pointer.
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = (int *)malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max ; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
