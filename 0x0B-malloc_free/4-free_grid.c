#include "holberton.h"

/**
 *free_grid - function that frees a 2 dimensional grid previously
 *@grid: pointer
 *@height: number row
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}

	free(grid);
}
