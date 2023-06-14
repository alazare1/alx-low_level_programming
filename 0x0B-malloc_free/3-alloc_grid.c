
#include <stdlib.h>

/**
 * free_remaining_grid - deletes grid on instances of failure
 * @row: current row for deletion
 * @grid: int**
 * Return: None
 */

void free_remaining_grid(int row, int **grid)
{
	while (row > 0)
	{
		row--;
		free(grid[row]);
	}
	free(grid);

}

/**
 * alloc_grid - allocates space for a grid
 * @width: integer
 * @height: integer
 * Return: On success return pointer to grid
 * On error, or height, width <= 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid != NULL)
	{
		i = 0;
		while (i < height)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] != NULL)
			{
				i++;
			}
			else
			{
				free_remaining_grid(i, grid);
				return (NULL);
			}
		}
		return (grid);
	}
	free(grid);
	return (NULL);
}
