#include "main.h"

/**
 * print_alphabet - function to print alphabet
 * @c - alphabet A - Z
 * Return: returns 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	 _putchar('\n');
}
