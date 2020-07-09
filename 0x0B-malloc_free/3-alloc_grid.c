#include "holberton.h"

/**
 *alloc_grid - function that returns a pointer
 *@width: s
 *@height: j
 *Return: grid
 */
int **alloc_grid(int width, int height)
{
	int s;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (s = 0; s < height; s++)
	{
		grid[s] = malloc(sizeof(int *) * width);
		if (grid[s] == NULL)
		{
			for (s = s - 1; s >= 0; s--)
				free(grid[s]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[s][j] = 0;
	}
	return (grid);
}
