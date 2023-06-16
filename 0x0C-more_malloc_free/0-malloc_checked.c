#include <stdlib.h>

/**
 * malloc_checked - allocates b bytes of memory
 * @b: bytes of memory
 * Return: On success return pointer to allocated space
 * On error, return NULL
 */

void *malloc_checked(unsigned int b)
{
	void *retptr = malloc(b);

	if (retptr == NULL)
	{
		exit(98);
	}
	return (retptr);
}
