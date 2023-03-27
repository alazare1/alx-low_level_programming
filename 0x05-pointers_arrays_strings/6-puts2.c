#include "main.h"
/**
 * puts2 - function print every other
 * @str: passed in value
 * Return: every other string printed
 */




void puts2(char *str)
{
	char *p = str;
	int count = 0;

	while (*p)
	{
	count++;
	p++;
	}
	p = str;
	while (*p)
	{
	_putchar(*p);
	p += 2;
}
	_putchar('\n');
}
