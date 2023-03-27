#include "main.h"

/*
 *print_rev - prints reverse of the string function
 *@s:passed string
 *return: printed out string
 */


void print_rev(char *s)
{
	char *p = s;

	while (*p)
	{
	p++;
	}
	p--;
	while (p >= s)
	{
	_putchar(*p);
	p--;
	}
	_putchar('\n');
}
