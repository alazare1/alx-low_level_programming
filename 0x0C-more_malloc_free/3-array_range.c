#include <stdlib.h>

int *array_range(int min, int max)
{
    int * retptr;
    int i = 0;

    if (min >= max)
    {
        return NULL;
    }

    retptr = malloc(sizeof(int) * (max - min + 1));
    if (retptr != NULL)
    {
        while (i <= (max - min))
        {
            retptr[i] = min + i;
            i++;
        }
    }

    return retptr;

}