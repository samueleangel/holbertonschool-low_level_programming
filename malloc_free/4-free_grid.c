#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(void)
{
	int **grid;
	int width = 5, height = 4;
	int i, j;

	grid = alloc_grid(width, height);
	if (grid == NULL)
	{
		printf("Failed to allocate grid. \n");
		return (1);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}

	free_grid(grid, height);

	return (0);
}
