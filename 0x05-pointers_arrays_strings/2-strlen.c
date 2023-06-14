#include "main.h"

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
