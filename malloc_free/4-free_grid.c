#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success, 1 on failure.
 */
void free_grid (int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
