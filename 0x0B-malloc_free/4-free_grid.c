#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  frees a 2 dimensional array
 * @grid: the 2D array
 * @height: the height of 2D array
 * Return: no return.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
