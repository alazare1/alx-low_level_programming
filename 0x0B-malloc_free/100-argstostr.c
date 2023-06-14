#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p)
	{
	p++;
	}
	return (p - s);
}


/**
 * argstostr - turns args into a string
 * @ac: number of args
 * @av: list of args
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
    char * retstr;
    int count = 0;
    int i = 0;

    if ((ac <= 1) || (av == NULL))
    {
        return NULL;
    }

    while (i < ac)
    {
        count += _strlen(av[i]) + 1;
        i++;
    }
    retstr = malloc(sizeof(char) * count + 1);

    if (retstr != NULL)
    {
        char * dest = retstr;
        char * wordpoi;
        i = 0;

        while (i < ac)
        {
            wordpoi = av[i];
            while (*wordpoi != '\0')
            {
                *dest++ = *wordpoi++;
            }
             *dest++ = '\n';
                i++;
         }

        *dest = '\0';
    }
    return retstr;

}