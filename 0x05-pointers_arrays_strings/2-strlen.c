#include "main.h"

/*
 * _strlen - find length of string
 * @s: string
 * return: value of p - s
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
