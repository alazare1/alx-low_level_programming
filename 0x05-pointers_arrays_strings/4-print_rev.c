#include "main.h"

/**
 * print_rev - Prints a string in reverse order, followed by a newline character.
 * @s: A pointer to a string.
 *
 * Return: void.
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
