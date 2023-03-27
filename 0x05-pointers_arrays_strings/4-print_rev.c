#include "main.h"

/*
 *print_rev - print string in rev
 *@s:passed string
 *return: printed out string
 */




void print_rev(char *s)
{
	char *p = s;

	while (*(p + 1))
	{
	p++;
	}
	while (p >= s)
	{
	_putchar(*p);
	p--;
	}
	_putchar('\n');
}
