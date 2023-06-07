#include "main.h"

/**
 * _puts_recursion - writes character pointer to output
 * @s: Pointer to the start of the string
 *
 * Return: Nothing (void)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{

		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
