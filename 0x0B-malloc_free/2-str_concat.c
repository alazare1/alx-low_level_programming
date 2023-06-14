#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{

    int size_1 = 0;
    int size_2 = 0;
    char * ret;

    if (s1 != NULL){
        char * sub_pointer = s1;
        while (*sub_pointer != '\0') 
        {
            size_1++;
            sub_pointer += 1;
        }
    }

    if (s2 != NULL){
        char * sub_pointer_two = s2;
        while(*sub_pointer_two != '\0') 
        {
            size_2++;
            sub_pointer_two += 1;
        }
    }

    ret = malloc(sizeof(char) * (size_1 + size_2));

    if (ret != NULL)
    {
        int i = 0;
        char * sub_pointer = s1;

        while (i < size_1) 
        {
            ret[i] = sub_pointer[0];
            sub_pointer += 1;
            i++;
        }
        sub_pointer = s2;
        i = 0;
        while (i < size_2) 
        {
            ret[i + size_1] = sub_pointer[0];
            sub_pointer += 1;
            i++;
        }
    }

    return ret;

}