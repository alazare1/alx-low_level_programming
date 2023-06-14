#include <stdlib.h>

/**
 * free_grid - removes allocated space for a grid
 * @grid: int**
 * @height: integer
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
