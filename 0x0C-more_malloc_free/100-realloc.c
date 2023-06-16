#include <stdlib.h>

/**
 * get_min - determine largest size
 * @old_size: int
 * @new_size: int
 * Return: On success return number
 * On error, return NULL
 */

unsigned int get_min(unsigned int old_size, unsigned int new_size)
{
	if (old_size <= new_size)
	{
		return (old_size);
	}
	else
	{
		return (new_size);
	}
}

/**
 * _realloc - allocate new memory of new_size and copy into new memory
 * @ptr: void *
 * @old_size: int
 * @new_size: int
 * Return: On success return pointer to newly allocated memory
 * On error, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		unsigned int min = get_min(old_size, new_size);
		void *retptr = malloc(new_size);
		unsigned char *r_ptr = retptr;
		unsigned char *l_ptr = ptr;
		unsigned int i = 0;

		while (i < min)
		{
			*r_ptr++ = *l_ptr++;
			i++;
		}

		free(ptr);
		return (retptr);

		}
}
