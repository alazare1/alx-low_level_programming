#include "main.h"

/**
 *_puts - creates a string of characters
 *@str: gives value of string
 *return: putchar printout
 */


void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
