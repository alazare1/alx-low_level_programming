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
    char * retptr;
    unsigned int i = 0;

    if ((nmemb == 0) || (size == 0))
    {
        return NULL;
    }

    void *retptr = malloc(sizeof(void *) * nmemb);

    if (retptr != NULL)
    {
        while (i < nmemb)
        {
            retptr[i] = malloc(size);
            i++;
        }
    }

	return (retptr);
}