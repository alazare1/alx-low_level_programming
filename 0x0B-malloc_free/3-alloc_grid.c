
#include <stdlib.h>

/**
 * alloc_grid - allocates space for a grid
 * @width: integer
 * @height: integer
 * Return: On success return pointer to grid
 * On error, or height, width <= 0, return NULL
 */

int **alloc_grid(int width, int height)
{
    int** grid;
    int i;

    if (height <= 0 || width <= 0)
    {
        return NULL;
    }

    grid = malloc(sizeof(int*) * height);
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
                while ( i > 0)
                {
                    i--;
                    free(grid[i]);
                }
                free(grid);
                return NULL;
            }
        }

        return grid;
    }

    free(grid);

    return NULL;
}