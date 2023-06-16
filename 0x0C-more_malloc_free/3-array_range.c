#include <stdlib.h>


/**
 * array_range - allocate and initalize int array from min to max
 * @min: int
 * @max: int
 * Return: On success return pointer to int array
 * On error, return NULL
 */

int *array_range(int min, int max)
{
	int *retptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
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

	return (retptr);
}
