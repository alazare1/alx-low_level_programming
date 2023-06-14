#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
    char* array = malloc(sizeof(c) * size);
    
    if (size == 0){
        return NULL;
    }
    
    if (array != NULL){
        unsigned int i = 0;
        while (i < size)
        {
            array[i] = c;
            i++;
        }
    }
    return array;
}