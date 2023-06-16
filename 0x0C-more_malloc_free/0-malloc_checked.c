#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
    void *retptr = malloc(b);
    if (retptr == NULL)
    {
        exit(98);
    } 
    return retptr;
}
