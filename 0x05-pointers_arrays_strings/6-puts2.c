#include "main.h"
/**
 * puts2 - function print every other
 * @str: passed in value
 * Return: every other string prints
 */

void puts2(char *str)
{
	char *p = str;
	int len = 0;

	while (*p)
	{
	len++;
	p++;
	}

	p = str;
	while (len > 0)
	{
	putchar(*p);
	p += 2;
	len -= 2;
	}
	putchar('\n');
}
