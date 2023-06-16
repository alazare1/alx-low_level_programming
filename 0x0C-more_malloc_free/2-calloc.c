#include <stdlib.h>

/**
 * _calloc - creates an array on nmemb with items of size bytes
 * @nmemb: items in array
 * @size:  bytes of each item
 * Return: On success return pointer to allocated space
 * On error, or nmemb, size == NULL, return NULL
 */

void * _memset(void *s, unsigned char c,  unsigned int len)
{
    unsigned char* p=s;
    while(len--)
    {
        *p++ = (unsigned char)c;
    }
    return s;
}
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

    _memset(retptr, 0, sizeof(size) * nmemb);
    
	return (retptr);
}