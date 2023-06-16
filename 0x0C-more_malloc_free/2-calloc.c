#include <stdlib.h>

/**
 * _calloc - creates an array on nmemb with items of size bytes
 * @nmemb: items in array
 * @size:  bytes of each item
 * Return: On success return pointer to allocated space
 * On error, or nmemb, size == NULL, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void * retptr;

    if ((nmemb == 0) || (size == 0))
    {
        return NULL;
    }

    retptr = malloc(sizeof(size) * nmemb);

    if (retptr == NULL)
    {
        return NULL;
    }

	return (retptr);
}