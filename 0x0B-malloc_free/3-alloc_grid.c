
#include <stdlib.h>
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
            i++;
        }
    }

    return grid;
}