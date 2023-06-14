#include <stdlib.h>
char *_strdup(char *str)
{
    char * sub_pointer = str;
    int size = 0;
    int i;
    char * duplicate;

    if (str == NULL)
    {
        return NULL;
    }

    while(*sub_pointer != '\0') 
    {
        size++;
        sub_pointer += 1;
    }

    duplicate = malloc(sizeof(str[0]) * size);

    if (duplicate  != NULL)
    {
        i = 0;
        sub_pointer = str;
        while(*sub_pointer != '\0') 
        {
            duplicate[i] = sub_pointer[0];
            sub_pointer += 1;
            i++;
        }
    }
    return duplicate;
}