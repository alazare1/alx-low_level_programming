#include <stdlib.h>
/**
 * create_array - creates new array of the same character
 * @c: The character to print
 * @size: size of the array
 * Return: On success return pointer to char array
 * On error, or size == 0, return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
