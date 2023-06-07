#include "main.h"

/**
 * _print_rev_recursion - writes string in reverse to output
 * @s: Pointer to the start of the string
 *
 * Return: Nothing (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
