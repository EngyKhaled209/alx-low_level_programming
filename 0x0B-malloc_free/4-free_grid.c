#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry point
 * @grid: first int
 * @height: second int
 * Return: Always 0 (success)
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
