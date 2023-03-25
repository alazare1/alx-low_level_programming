#include "main.h"
/**
 * print_alphabet - prints alphabet a-z 10 times
 * @c - character
 * Return: putchar (c) values with new lines
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char c = 'a';

	while (i <= 10) 
	{
		while (c >= 'a' && c <= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	i++;

	c = 'a';
	}
}
