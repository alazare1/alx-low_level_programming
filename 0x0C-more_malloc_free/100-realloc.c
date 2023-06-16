#include <stdlib.h>

unsigned int get_min(unsigned int old_size, unsigned int new_size)
{
    if (old_size <= new_size)
    {
        return old_size;
    }
    else
    {
        return new_size;
    }
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (ptr == NULL)
    {
        return malloc(new_size);
    }
    else if(new_size == 0)
    {
        free(ptr);
        return NULL;
    }
    else 
    {
        unsigned int min = get_min(old_size, new_size);
        void * retptr = malloc(new_size);
        void * l_ptr = ptr;
        void * r_ptr = retptr;
        int i = 0;

        while (i < min)
        {
            *l_ptr++ = *r_ptr++;
            i++;
        }

        free(ptr);
        return retptr;
        
    }
}